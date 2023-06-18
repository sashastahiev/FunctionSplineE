#include "MyForm.h"
#include <iostream>
#include <chrono>
#include <ctime>
#include <fstream>
#include <vector>
#include <cmath>
using namespace std;
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main() {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	setlocale(LC_ALL, "Russian");
	SplineE::MyForm form;
	Application::Run(% form);
}

double R(double A, double x1, double x2, double x3, double y1, double y2, double y3)
{
    return (y2 - y1) * (exp(A * (x3 - x2)) - 1) + (y3 - y2) * (exp(-A * (x2 - x1)) - 1);
}
double dR(double A, double x1, double x2, double x3, double y1, double y2, double y3)
{
    return (y2 - y1) * (x3 - x2) * exp(A * (x3 - x2)) + (y3 - y2) * (-(x2 - x1)) * exp(-A * (x2 - x1));
}

double get_A(double x1, double x2, double x3, double y1, double y2, double y3)
{
    double A = 2 * log(((y3 - y2) * (x2 - x1)) / ((y2 - y1) * (x3 - x2))) / (x3 - x1);
    double dA = -R(A, x1, x2, x3, y1, y2, y3) / dR(A, x1, x2, x3, y1, y2, y3);
    while (dA > 0.000001)
    {
        A = A + dA;
        dA = -R(A, x1, x2, x3, y1, y2, y3) / dR(A, x1, x2, x3, y1, y2, y3);
    }
    return A;
}

double F_shtrih(double x_eval, double* x, double* y, bool A) {
    int N = 10;

    if (x_eval < x[0])
        return 0;
    if (x_eval > x[N - 1])
        return 0;

    if (x_eval < x[1])
    {
        double A = get_A(x[0], x[1], x[2], y[0], y[1], y[2]);
        double B = (y[0] - y[1]) / (exp(A * x[0]) - exp(A * x[1]));
        double C = y[0] - B * exp(A * x[0]);
        return B * exp(A * x_eval)*A;
    }
    if (x_eval > x[N - 2])
    {
        double A = get_A(x[N - 3], x[N - 2], x[N - 1], y[N - 3], y[N - 2], y[N - 1]);
        double B = (y[N - 3] - y[N - 2]) / (exp(A * x[N - 3]) - exp(A * x[N - 2]));
        double C = y[N - 3] - B * exp(A * x[N - 3]);
        return B * exp(A * x_eval)*A;
    }
    int i;
    for (i = 0; i < N; i++)
        if (x_eval < x[i + 1])
            break;

    double A1 = get_A(x[i - 1], x[i], x[i + 1], y[i - 1], y[i], y[i + 1]);
    double B1 = (y[i - 1] - y[i]) / (exp(A1 * x[i - 1]) - exp(A1 * x[i]));
    double C1 = y[i - 1] - B1 * exp(A1 * x[i - 1]);

    i++;
    double A2 = get_A(x[i - 1], x[i], x[i + 1], y[i - 1], y[i], y[i + 1]);
    double B2 = (y[i - 1] - y[i]) / (exp(A2 * x[i - 1]) - exp(A2 * x[i]));
    double C2 = y[i - 1] - B2 * exp(A2 * x[i - 1]);
    double F1, F2, F1H, F2H;
    F1 = C1 + B1 * exp(A1 * x_eval);
    F2 = C2 + B2 * exp(A2 * x_eval);
    F1H = B1 * exp(A1 * x_eval) * A1;
    F2H = B2 * exp(A2 * x_eval) * A2;
    if (A)
        return (F1H + F2H) / 2;
    else 
        return (F2 - F1 + (x[i] - x_eval) * F1H + (x_eval - x[i-1])*F2H)/(x[i] - x[i-1]);
}

double exp_spline_irregular(double x_eval, double* x, double* y, bool A)
{
    int N = 10;

    if (x_eval < x[0])
        return 0;
    if (x_eval > x[N - 1])
        return 0;

    if (x_eval < x[1])
    {
        double A = get_A(x[0], x[1], x[2], y[0], y[1], y[2]);
        double B = (y[0] - y[1]) / (exp(A * x[0]) - exp(A * x[1]));
        double C = y[0] - B * exp(A * x[0]);
        return C + B * exp(A * x_eval);
    }
    if (x_eval > x[N - 2])
    {
        double A = get_A(x[N - 3], x[N - 2], x[N - 1], y[N - 3], y[N - 2], y[N - 1]);
        double B = (y[N - 3] - y[N - 2]) / (exp(A * x[N - 3]) - exp(A * x[N - 2]));
        double C = y[N - 3] - B * exp(A * x[N - 3]);
        return C + B * exp(A * x_eval);
    }
    int i;
    for (i = 0; i < N; i++)
        if (x_eval < x[i + 1])
            break;

    double A1 = get_A(x[i - 1], x[i], x[i + 1], y[i - 1], y[i], y[i + 1]);
    double B1 = (y[i - 1] - y[i]) / (exp(A1 * x[i - 1]) - exp(A1 * x[i]));
    double C1 = y[i - 1] - B1 * exp(A1 * x[i - 1]);

    i++;
    double A2 = get_A(x[i - 1], x[i], x[i + 1], y[i - 1], y[i], y[i + 1]);
    double B2 = (y[i - 1] - y[i]) / (exp(A2 * x[i - 1]) - exp(A2 * x[i]));
    double C2 = y[i - 1] - B2 * exp(A2 * x[i - 1]);
    double F1, F2;
    F1 = C1 + B1 * exp(A1 * x_eval);
    F2 = C2 + B2 * exp(A2 * x_eval);
    if (A) 
        return (F1 + F2) / 2;
    else
        return ((x[i] - x_eval) * F1 + (x_eval - x[i - 1]) * F2) / (x[i] - x[i - 1]);
}


System::Void SplineE::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
    int N_eval = 300;
    int i = 0;
    double x_eval = x[0], rez1, rez2, rez2h;
    if (sklei1->Checked == true) {
        while (x_eval < x[9])
        {
            rez1 = x_eval;
            rez2 = exp_spline_irregular(rez1, x, y, true);
            rez2h = F_shtrih(rez1, x, y, true);
            this->chart1->Series[0]->Points->AddXY(rez1, rez2);
            this->chart1->Series[2]->Points->AddXY(rez1, rez2h);
            x_eval = x_eval + ((x[9] - x[0]) / N_eval);
        }
    }
    else if (sklei2->Checked == true) {
        while (x_eval < x[9])
        {
            rez1 = x_eval;
            rez2 = exp_spline_irregular(rez1, x, y, false);
            rez2h = F_shtrih(rez1, x, y, false);
            this->chart1->Series[0]->Points->AddXY(rez1, rez2);
            this->chart1->Series[2]->Points->AddXY(rez1, rez2h);
            x_eval = x_eval + ((x[9] - x[0]) / N_eval);
        }
    }
}

System::Void SplineE::MyForm::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
    x[0] = Convert::ToDouble(textBox_x1->Text);
    y[0] = Convert::ToDouble(textBox_y1->Text);
    x[1] = Convert::ToDouble(textBox_x2->Text);
    y[1] = Convert::ToDouble(textBox_y2->Text);
    x[2] = Convert::ToDouble(textBox_x3->Text);
    y[2] = Convert::ToDouble(textBox_y3->Text);
    x[3] = Convert::ToDouble(textBox_x4->Text);
    y[3] = Convert::ToDouble(textBox_y4->Text);
    x[4] = Convert::ToDouble(textBox_x5->Text);
    y[4] = Convert::ToDouble(textBox_y5->Text);
    x[5] = Convert::ToDouble(textBox_x6->Text);
    y[5] = Convert::ToDouble(textBox_y6->Text);
    x[6] = Convert::ToDouble(textBox_x7->Text);
    y[6] = Convert::ToDouble(textBox_y7->Text);
    x[7] = Convert::ToDouble(textBox_x8->Text);
    y[7] = Convert::ToDouble(textBox_y8->Text);
    x[8] = Convert::ToDouble(textBox_x9->Text);
    y[8] = Convert::ToDouble(textBox_y9->Text);
    x[9] = Convert::ToDouble(textBox_x10->Text);
    y[9] = Convert::ToDouble(textBox_y10->Text);
    for (int i = 0; i < 10; i++) {
        this->chart1->Series[1]->Points->AddXY(x[i], y[i]);
    }
}

System::Void SplineE::MyForm::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
    textBox_x1->Text = "0";
    textBox_y1->Text = "830";
    textBox_x2->Text = "1";
    textBox_y2->Text = "2310";
    textBox_x3->Text = "2";
    textBox_y3->Text = "3069";
    textBox_x4->Text = "3";
    textBox_y4->Text = "3533";
    textBox_x5->Text = "4";
    textBox_y5->Text = "3705";
    textBox_x6->Text = "5,3";
    textBox_y6->Text = "3817";
    textBox_x7->Text = "6,2";
    textBox_y7->Text = "3935";
    textBox_x8->Text = "10";
    textBox_y8->Text = "4046";
    textBox_x9->Text = "11";
    textBox_y9->Text = "4166";
    textBox_x10->Text = "13";
    textBox_y10->Text = "4276";
}

System::Void SplineE::MyForm::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
    textBox_x1->Text = "-10";
    textBox_y1->Text = "-0,11";
    textBox_x2->Text = "-7";
    textBox_y2->Text = "0,069";
    textBox_x3->Text = "-1";
    textBox_y3->Text = "0,107";
    textBox_x4->Text = "0";
    textBox_y4->Text = "0,195";
    textBox_x5->Text = "0,5";
    textBox_y5->Text = "0,254";
    textBox_x6->Text = "1,4";
    textBox_y6->Text = "0,535";
    textBox_x7->Text = "2,3";
    textBox_y7->Text = "0,825";
    textBox_x8->Text = "4,2";
    textBox_y8->Text = "1,308";
    textBox_x9->Text = "6,4";
    textBox_y9->Text = "1,432";
    textBox_x10->Text = "10";
    textBox_y10->Text = "1,847";
}

System::Void SplineE::MyForm::button5_Click(System::Object^ sender, System::EventArgs^ e)
{
    textBox_x1->Text = "-10";
    textBox_y1->Text = "-0,11";
    textBox_x2->Text = "-7,78";
    textBox_y2->Text = "0,069";
    textBox_x3->Text = "-5,56";
    textBox_y3->Text = "0,107";
    textBox_x4->Text = "-3,33";
    textBox_y4->Text = "0,195";
    textBox_x5->Text = "-1,11";
    textBox_y5->Text = "0,455";
    textBox_x6->Text = "1,11";
    textBox_y6->Text = "0,535";
    textBox_x7->Text = "3,33";
    textBox_y7->Text = "0,902";
    textBox_x8->Text = "5,56";
    textBox_y8->Text = "0,992";
    textBox_x9->Text = "7,78";
    textBox_y9->Text = "1,031";
    textBox_x10->Text = "10";
    textBox_y10->Text = "1,106";
}

System::Void SplineE::MyForm::button6_Click(System::Object^ sender, System::EventArgs^ e)
{
    textBox_x1->Text = "";
    textBox_y1->Text = "";
    textBox_x2->Text = "";
    textBox_y2->Text = "";
    textBox_x3->Text = "";
    textBox_y3->Text = "";
    textBox_x4->Text = "";
    textBox_y4->Text = "";
    textBox_x5->Text = "";
    textBox_y5->Text = "";
    textBox_x6->Text = "";
    textBox_y6->Text = "";
    textBox_x7->Text = "";
    textBox_y7->Text = "";
    textBox_x8->Text = "";
    textBox_y8->Text = "";
    textBox_x9->Text = "";
    textBox_y9->Text = "";
    textBox_x10->Text = "";
    textBox_y10->Text = "";
    this->chart1->Series[0]->Points->Clear();
    this->chart1->Series[1]->Points->Clear();
    this->chart1->Series[2]->Points->Clear();
}
