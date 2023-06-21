#pragma once

namespace SplineE {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox_x1;
	private: System::Windows::Forms::TextBox^ textBox_y1;
	private: System::Windows::Forms::TextBox^ textBox_y2;



	private: System::Windows::Forms::TextBox^ textBox_x2;
	private: System::Windows::Forms::TextBox^ textBox_y4;


	private: System::Windows::Forms::TextBox^ textBox_x4;
	private: System::Windows::Forms::TextBox^ textBox_y3;


	private: System::Windows::Forms::TextBox^ textBox_x3;
	private: System::Windows::Forms::TextBox^ textBox_y8;


	private: System::Windows::Forms::TextBox^ textBox_x8;
	private: System::Windows::Forms::TextBox^ textBox_y7;


	private: System::Windows::Forms::TextBox^ textBox_x7;
	private: System::Windows::Forms::TextBox^ textBox_y6;


	private: System::Windows::Forms::TextBox^ textBox_x6;
	private: System::Windows::Forms::TextBox^ textBox_y5;


	private: System::Windows::Forms::TextBox^ textBox_x5;
	private: System::Windows::Forms::TextBox^ textBox_y10;


	private: System::Windows::Forms::TextBox^ textBox_x10;
	private: System::Windows::Forms::TextBox^ textBox_y9;


	private: System::Windows::Forms::TextBox^ textBox_x9;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::CheckBox^ sklei1;
	private: System::Windows::Forms::CheckBox^ sklei2;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series11 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series12 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series13 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series14 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series15 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox_x1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_y1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_y2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_x2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_y4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_x4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_y3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_x3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_y8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_x8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_y7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_x7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_y6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_x6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_y5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_x5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_y10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_x10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_y9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_x9 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->sklei1 = (gcnew System::Windows::Forms::CheckBox());
			this->sklei2 = (gcnew System::Windows::Forms::CheckBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea3->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chart1->Legends->Add(legend3);
			this->chart1->Location = System::Drawing::Point(21, 12);
			this->chart1->Name = L"chart1";
			series11->BorderWidth = 2;
			series11->ChartArea = L"ChartArea1";
			series11->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series11->Color = System::Drawing::Color::Blue;
			series11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			series11->LabelBorderWidth = 3;
			series11->LabelForeColor = System::Drawing::Color::Red;
			series11->Legend = L"Legend1";
			series11->Name = L"y = C + B*exp(Ax)";
			series12->BorderWidth = 4;
			series12->ChartArea = L"ChartArea1";
			series12->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series12->Color = System::Drawing::Color::Red;
			series12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			series12->Legend = L"Legend1";
			series12->Name = L"x1,x2,x3,...";
			series13->BorderWidth = 2;
			series13->ChartArea = L"ChartArea1";
			series13->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series13->Color = System::Drawing::Color::Fuchsia;
			series13->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			series13->Legend = L"Legend1";
			series13->Name = L"y\' = A*B*exp(Ax)";
			series14->BorderWidth = 2;
			series14->ChartArea = L"ChartArea1";
			series14->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series14->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			series14->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			series14->Legend = L"Legend1";
			series14->Name = L"y = sqrt(x)";
			series15->BorderWidth = 2;
			series15->ChartArea = L"ChartArea1";
			series15->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series15->Color = System::Drawing::Color::Black;
			series15->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			series15->Legend = L"Legend1";
			series15->Name = L"y\' = 1/2*sqrt(x)";
			this->chart1->Series->Add(series11);
			this->chart1->Series->Add(series12);
			this->chart1->Series->Add(series13);
			this->chart1->Series->Add(series14);
			this->chart1->Series->Add(series15);
			this->chart1->Size = System::Drawing::Size(1115, 360);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(198, 506);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(264, 39);
			this->button1->TabIndex = 1;
			this->button1->Text = L"y = C + B*exp(Ax)";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(29, 405);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 27);
			this->label1->TabIndex = 2;
			this->label1->Text = L"X:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(29, 458);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(33, 27);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Y:";
			// 
			// textBox_x1
			// 
			this->textBox_x1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_x1->Location = System::Drawing::Point(82, 405);
			this->textBox_x1->Multiline = true;
			this->textBox_x1->Name = L"textBox_x1";
			this->textBox_x1->Size = System::Drawing::Size(97, 30);
			this->textBox_x1->TabIndex = 4;
			// 
			// textBox_y1
			// 
			this->textBox_y1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_y1->Location = System::Drawing::Point(82, 458);
			this->textBox_y1->Name = L"textBox_y1";
			this->textBox_y1->Size = System::Drawing::Size(97, 30);
			this->textBox_y1->TabIndex = 5;
			// 
			// textBox_y2
			// 
			this->textBox_y2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_y2->Location = System::Drawing::Point(185, 458);
			this->textBox_y2->Name = L"textBox_y2";
			this->textBox_y2->Size = System::Drawing::Size(97, 30);
			this->textBox_y2->TabIndex = 7;
			// 
			// textBox_x2
			// 
			this->textBox_x2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_x2->Location = System::Drawing::Point(185, 405);
			this->textBox_x2->Name = L"textBox_x2";
			this->textBox_x2->Size = System::Drawing::Size(97, 30);
			this->textBox_x2->TabIndex = 6;
			// 
			// textBox_y4
			// 
			this->textBox_y4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_y4->Location = System::Drawing::Point(391, 458);
			this->textBox_y4->Name = L"textBox_y4";
			this->textBox_y4->Size = System::Drawing::Size(97, 30);
			this->textBox_y4->TabIndex = 11;
			// 
			// textBox_x4
			// 
			this->textBox_x4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_x4->Location = System::Drawing::Point(391, 405);
			this->textBox_x4->Name = L"textBox_x4";
			this->textBox_x4->Size = System::Drawing::Size(97, 30);
			this->textBox_x4->TabIndex = 10;
			// 
			// textBox_y3
			// 
			this->textBox_y3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_y3->Location = System::Drawing::Point(288, 458);
			this->textBox_y3->Name = L"textBox_y3";
			this->textBox_y3->Size = System::Drawing::Size(97, 30);
			this->textBox_y3->TabIndex = 9;
			// 
			// textBox_x3
			// 
			this->textBox_x3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_x3->Location = System::Drawing::Point(288, 405);
			this->textBox_x3->Name = L"textBox_x3";
			this->textBox_x3->Size = System::Drawing::Size(97, 30);
			this->textBox_x3->TabIndex = 8;
			// 
			// textBox_y8
			// 
			this->textBox_y8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_y8->Location = System::Drawing::Point(803, 458);
			this->textBox_y8->Name = L"textBox_y8";
			this->textBox_y8->Size = System::Drawing::Size(97, 30);
			this->textBox_y8->TabIndex = 19;
			// 
			// textBox_x8
			// 
			this->textBox_x8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_x8->Location = System::Drawing::Point(803, 405);
			this->textBox_x8->Name = L"textBox_x8";
			this->textBox_x8->Size = System::Drawing::Size(97, 30);
			this->textBox_x8->TabIndex = 18;
			// 
			// textBox_y7
			// 
			this->textBox_y7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_y7->Location = System::Drawing::Point(700, 458);
			this->textBox_y7->Name = L"textBox_y7";
			this->textBox_y7->Size = System::Drawing::Size(97, 30);
			this->textBox_y7->TabIndex = 17;
			// 
			// textBox_x7
			// 
			this->textBox_x7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_x7->Location = System::Drawing::Point(700, 405);
			this->textBox_x7->Name = L"textBox_x7";
			this->textBox_x7->Size = System::Drawing::Size(97, 30);
			this->textBox_x7->TabIndex = 16;
			// 
			// textBox_y6
			// 
			this->textBox_y6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_y6->Location = System::Drawing::Point(597, 458);
			this->textBox_y6->Name = L"textBox_y6";
			this->textBox_y6->Size = System::Drawing::Size(97, 30);
			this->textBox_y6->TabIndex = 15;
			// 
			// textBox_x6
			// 
			this->textBox_x6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_x6->Location = System::Drawing::Point(597, 405);
			this->textBox_x6->Name = L"textBox_x6";
			this->textBox_x6->Size = System::Drawing::Size(97, 30);
			this->textBox_x6->TabIndex = 14;
			// 
			// textBox_y5
			// 
			this->textBox_y5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_y5->Location = System::Drawing::Point(494, 458);
			this->textBox_y5->Name = L"textBox_y5";
			this->textBox_y5->Size = System::Drawing::Size(97, 30);
			this->textBox_y5->TabIndex = 13;
			// 
			// textBox_x5
			// 
			this->textBox_x5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_x5->Location = System::Drawing::Point(494, 405);
			this->textBox_x5->Name = L"textBox_x5";
			this->textBox_x5->Size = System::Drawing::Size(97, 30);
			this->textBox_x5->TabIndex = 12;
			// 
			// textBox_y10
			// 
			this->textBox_y10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_y10->Location = System::Drawing::Point(1009, 458);
			this->textBox_y10->Name = L"textBox_y10";
			this->textBox_y10->Size = System::Drawing::Size(97, 30);
			this->textBox_y10->TabIndex = 23;
			// 
			// textBox_x10
			// 
			this->textBox_x10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_x10->Location = System::Drawing::Point(1009, 405);
			this->textBox_x10->Name = L"textBox_x10";
			this->textBox_x10->Size = System::Drawing::Size(97, 30);
			this->textBox_x10->TabIndex = 22;
			// 
			// textBox_y9
			// 
			this->textBox_y9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_y9->Location = System::Drawing::Point(906, 458);
			this->textBox_y9->Name = L"textBox_y9";
			this->textBox_y9->Size = System::Drawing::Size(97, 30);
			this->textBox_y9->TabIndex = 21;
			// 
			// textBox_x9
			// 
			this->textBox_x9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_x9->Location = System::Drawing::Point(906, 405);
			this->textBox_x9->Name = L"textBox_x9";
			this->textBox_x9->Size = System::Drawing::Size(97, 30);
			this->textBox_x9->TabIndex = 20;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(124, 375);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(20, 22);
			this->label3->TabIndex = 24;
			this->label3->Text = L"1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(1042, 375);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(30, 22);
			this->label4->TabIndex = 25;
			this->label4->Text = L"10";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(943, 375);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(20, 22);
			this->label5->TabIndex = 26;
			this->label5->Text = L"9";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(839, 375);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(20, 22);
			this->label6->TabIndex = 27;
			this->label6->Text = L"8";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(737, 375);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(20, 22);
			this->label7->TabIndex = 28;
			this->label7->Text = L"7";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(636, 375);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(20, 22);
			this->label8->TabIndex = 29;
			this->label8->Text = L"6";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(533, 375);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(20, 22);
			this->label9->TabIndex = 30;
			this->label9->Text = L"5";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(428, 375);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(20, 22);
			this->label10->TabIndex = 31;
			this->label10->Text = L"4";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(326, 375);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(20, 22);
			this->label11->TabIndex = 32;
			this->label11->Text = L"3";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(223, 375);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(20, 22);
			this->label12->TabIndex = 33;
			this->label12->Text = L"2";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(21, 506);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(171, 39);
			this->button2->TabIndex = 34;
			this->button2->Text = L"x1,x2,x3,...";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(937, 141);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(88, 32);
			this->button3->TabIndex = 35;
			this->button3->Text = L"файл 1";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(937, 185);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(88, 32);
			this->button4->TabIndex = 36;
			this->button4->Text = L"файл 2";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(937, 229);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(88, 32);
			this->button5->TabIndex = 37;
			this->button5->Text = L"файл 3";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::White;
			this->button6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(21, 551);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(171, 39);
			this->button6->TabIndex = 38;
			this->button6->Text = L"ќчистить^";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// sklei1
			// 
			this->sklei1->AutoSize = true;
			this->sklei1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->sklei1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sklei1->Location = System::Drawing::Point(937, 282);
			this->sklei1->Name = L"sklei1";
			this->sklei1->Size = System::Drawing::Size(172, 26);
			this->sklei1->TabIndex = 39;
			this->sklei1->Text = L"склеивание H(x)";
			this->sklei1->UseVisualStyleBackColor = false;
			// 
			// sklei2
			// 
			this->sklei2->AutoSize = true;
			this->sklei2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->sklei2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sklei2->Location = System::Drawing::Point(937, 314);
			this->sklei2->Name = L"sklei2";
			this->sklei2->Size = System::Drawing::Size(172, 26);
			this->sklei2->TabIndex = 40;
			this->sklei2->Text = L"склеивание G(x)";
			this->sklei2->UseVisualStyleBackColor = false;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(721, 506);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(201, 39);
			this->button7->TabIndex = 41;
			this->button7->Text = L"y = sgrt(x)";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(468, 506);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(247, 39);
			this->button8->TabIndex = 42;
			this->button8->Text = L"y\' = A*B*exp(Ax)";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(928, 506);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(208, 39);
			this->button9->TabIndex = 43;
			this->button9->Text = L"y\' = 1/(2*sgrt(x))";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::White;
			this->button10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(198, 551);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(264, 39);
			this->button10->TabIndex = 44;
			this->button10->Text = L"ќчистить^";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::White;
			this->button11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(468, 551);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(247, 39);
			this->button11->TabIndex = 45;
			this->button11->Text = L"ќчистить^";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::White;
			this->button12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(721, 551);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(201, 39);
			this->button12->TabIndex = 46;
			this->button12->Text = L"ќчистить^";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::White;
			this->button13->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(928, 551);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(208, 39);
			this->button13->TabIndex = 47;
			this->button13->Text = L"ќчистить^";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->ClientSize = System::Drawing::Size(1159, 614);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->sklei2);
			this->Controls->Add(this->sklei1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox_y10);
			this->Controls->Add(this->textBox_x10);
			this->Controls->Add(this->textBox_y9);
			this->Controls->Add(this->textBox_x9);
			this->Controls->Add(this->textBox_y8);
			this->Controls->Add(this->textBox_x8);
			this->Controls->Add(this->textBox_y7);
			this->Controls->Add(this->textBox_x7);
			this->Controls->Add(this->textBox_y6);
			this->Controls->Add(this->textBox_x6);
			this->Controls->Add(this->textBox_y5);
			this->Controls->Add(this->textBox_x5);
			this->Controls->Add(this->textBox_y4);
			this->Controls->Add(this->textBox_x4);
			this->Controls->Add(this->textBox_y3);
			this->Controls->Add(this->textBox_x3);
			this->Controls->Add(this->textBox_y2);
			this->Controls->Add(this->textBox_x2);
			this->Controls->Add(this->textBox_y1);
			this->Controls->Add(this->textBox_x1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->chart1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double* x = new double[10];
		double* y = new double[10];
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e);
};
}
