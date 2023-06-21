#include "MyForm.h"
#include <iostream>
#include <chrono>
#include <ctime>
#include <fstream>
#include <vector>
#include <cmath>
#include <math.h>
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

double xt, yt, ysht, Y1T = 0, Y2T = 0, Y1SHT = 0, Y2SHT = 0, GT, HT;
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
    xt = x_eval;
    yt = sqrt(xt);
    ysht = 1 / (2 * sqrt(xt));
    Y1T = F1;
    Y2T = F2;
    Y1SHT = A1 * B1 * exp(A1 * x_eval);
    Y2SHT = A2 * B2 * exp(A2 * x_eval);
    HT = (F1 + F2) / 2;
    GT = ((x[i] - x_eval) * F1 + (x_eval - x[i - 1]) * F2) / (x[i] - x[i - 1]);
    if (A) 
        return (F1 + F2) / 2;//H{x}
    else
        return ((x[i] - x_eval) * F1 + (x_eval - x[i - 1]) * F2) / (x[i] - x[i - 1]);//G(x)
}

//Построить y = C + B*exp(Ax)
System::Void SplineE::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
    int N_eval = 90;
    int i = 0;
    double x_eval = x[0], rez1, rez2;
    ofstream table;
    table.open("tableEsplain.txt");
    table << "  x  |  y(x)  |   y'(x)   | F1'(x) - y'(x) | F2'(x) - y'(x) |  F1(x) - y(x)  |  F2(x) - y(x)  |  G(x) - y(x)   |  H(x) - y(x)   |";
    table << "\n";
    if (sklei1->Checked == true) {
        while (x_eval <= x[9])
        {
            rez1 = x_eval;
            rez2 = exp_spline_irregular(rez1, x, y, true);
            if (x_eval >= x[1]) {
                table << xt << " | " << floor(yt * 1000) / 1000 << " | " 
                    << floor(ysht*1000)/1000 << " | " 
                    << floor((Y1SHT - ysht)*1000)/1000 << " | "
                    << floor((Y2SHT - ysht)*1000)/1000 << " | "
                    << floor((Y1T - yt)*1000)/1000 << " | " 
                    << floor((Y2T - yt)*1000)/1000 << " | " 
                    << floor((HT - yt)*1000)/1000 << " | " 
                    << floor((GT - yt)*1000)/1000 << "|" << endl;
            }
            this->chart1->Series[0]->Points->AddXY(rez1, rez2);
            x_eval = x_eval + ((x[9] - x[0]) / N_eval);
        }
        table << "\n";
    }
    else if (sklei2->Checked == true) {
        while (x_eval <= x[9])
        {
            rez1 = x_eval;
            rez2 = exp_spline_irregular(rez1, x, y, false);
            if (x_eval >= x[1]) {
                table << xt << " | " << floor(yt * 1000)/1000 << " | "
                    << floor(ysht * 1000)/1000 << " | "
                    << floor((Y1SHT - ysht) * 1000)/1000 << " | "
                    << floor((Y2SHT - ysht) * 1000)/1000 << " | "
                    << floor((Y1T - yt) * 1000)/1000 << " | "
                    << floor((Y2T - yt) * 1000)/1000 << " | "
                    << floor((HT - yt) * 1000)/1000 << " | "
                    << floor((GT - yt) * 1000)/1000 << "|" << endl;
            }
            this->chart1->Series[0]->Points->AddXY(rez1, rez2);
            x_eval = x_eval + ((x[9] - x[0]) / N_eval);
        }
        table << "\n";
    }
    table.close();
}

//Построить x1,x2,x3,...
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

//Построить y' = A*B*exp(Ax)
System::Void SplineE::MyForm::button8_Click(System::Object^ sender, System::EventArgs^ e)
{
    int N_eval = 90;
    double x_eval = x[0], rez1, rez2h;
    if (sklei1->Checked == true) {
        while (x_eval < x[9])
        {
            rez1 = x_eval;
            rez2h = F_shtrih(rez1, x, y, true);
            this->chart1->Series[2]->Points->AddXY(rez1, rez2h);
            x_eval = x_eval + ((x[9] - x[0]) / N_eval);
        }
    }
    else if (sklei2->Checked == true) {
        while (x_eval < x[9])
        {
            rez1 = x_eval;
            rez2h = F_shtrih(rez1, x, y, false);
            this->chart1->Series[2]->Points->AddXY(rez1, rez2h);
            x_eval = x_eval + ((x[9] - x[0]) / N_eval);
        }
    }
}

//Построить y = sqrt(x)
System::Void SplineE::MyForm::button7_Click(System::Object^ sender, System::EventArgs^ e)
{
    double m;
    this->chart1->Series[3]->Points->AddXY(0, 0);
    for (int i = 1; i < 91; i++) {
        m = double(i);
        this->chart1->Series[3]->Points->AddXY(m / 100, sqrt(m / 100));
    }
}

//Построить y' = 1/(2*sqrt(x))
System::Void SplineE::MyForm::button9_Click(System::Object^ sender, System::EventArgs^ e)
{
    double m;
    for (int i = 1; i < 91; i++) {
        m = double(i);
        this->chart1->Series[4]->Points->AddXY(m / 100, 1 / (2 * (sqrt(m / 100))));
    }
}

//Файл 1
System::Void SplineE::MyForm::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
    textBox_x1->Text = "0";
    textBox_y1->Text = "0";
    textBox_x2->Text = "0,1";
    textBox_y2->Text = "0,316";
    textBox_x3->Text = "0,2";
    textBox_y3->Text = "0,447";
    textBox_x4->Text = "0,3";
    textBox_y4->Text = "0,547";
    textBox_x5->Text = "0,4";
    textBox_y5->Text = "0,632";
    textBox_x6->Text = "0,5";
    textBox_y6->Text = "0,707";
    textBox_x7->Text = "0,6";
    textBox_y7->Text = "0,774";
    textBox_x8->Text = "0,7";
    textBox_y8->Text = "0,836";
    textBox_x9->Text = "0,8";
    textBox_y9->Text = "0,894";
    textBox_x10->Text = "0,9";
    textBox_y10->Text = "0,948";
}

//Файл 2
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

//Файл 3
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

//Очистить x1,x2,x3,...
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
    this->chart1->Series[1]->Points->Clear();
}

//Очистить y = C + B*exp(Ax)
System::Void SplineE::MyForm::button10_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->chart1->Series[0]->Points->Clear();
}

//Очистить y' = A*B*exp(Ax) 
System::Void SplineE::MyForm::button11_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->chart1->Series[2]->Points->Clear();
}

//Очистить y = sqrt(x)
System::Void SplineE::MyForm::button12_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->chart1->Series[3]->Points->Clear();
}

//Очистить y' = 1/(2*sqrt(x)) 
System::Void SplineE::MyForm::button13_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->chart1->Series[4]->Points->Clear();
}

