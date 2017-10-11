#pragma once

namespace imageprocessing_ming {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// SpecificationHistogram 的摘要
	/// </summary>
	public ref class SpecificationHistogram : public System::Windows::Forms::Form
	{
	public:
		SpecificationHistogram(void)
		{
			InitializeComponent();
			//
			//TODO:  在此加入建構函式程式碼
			//
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~SpecificationHistogram()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::PictureBox^  specific_origin;
	protected:

	public: System::Windows::Forms::PictureBox^  specific_object;
	protected:

	protected:

	protected:

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	public: System::Windows::Forms::DataVisualization::Charting::Chart^  Origin_Chart;
	public: System::Windows::Forms::DataVisualization::Charting::Chart^  Object_Chart;
	public: System::Windows::Forms::DataVisualization::Charting::Chart^  Result_Chart;
	public: System::Windows::Forms::PictureBox^  specific_result;
	public:




	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  Btn_SpecificationHistogram_Exit;

	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改
		/// 這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->specific_origin = (gcnew System::Windows::Forms::PictureBox());
			this->specific_object = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Origin_Chart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->Object_Chart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->Result_Chart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->specific_result = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Btn_SpecificationHistogram_Exit = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->specific_origin))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->specific_object))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Origin_Chart))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Object_Chart))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Result_Chart))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->specific_result))->BeginInit();
			this->SuspendLayout();
			// 
			// specific_origin
			// 
			this->specific_origin->Location = System::Drawing::Point(12, 58);
			this->specific_origin->Name = L"specific_origin";
			this->specific_origin->Size = System::Drawing::Size(315, 204);
			this->specific_origin->TabIndex = 0;
			this->specific_origin->TabStop = false;
			// 
			// specific_object
			// 
			this->specific_object->Location = System::Drawing::Point(12, 327);
			this->specific_object->Name = L"specific_object";
			this->specific_object->Size = System::Drawing::Size(315, 221);
			this->specific_object->TabIndex = 1;
			this->specific_object->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(23, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 12);
			this->label1->TabIndex = 2;
			this->label1->Text = L"原始圖";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(23, 295);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 12);
			this->label2->TabIndex = 3;
			this->label2->Text = L"目標圖";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(342, 30);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(65, 12);
			this->label3->TabIndex = 4;
			this->label3->Text = L"原始直方圖";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(342, 295);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(65, 12);
			this->label4->TabIndex = 5;
			this->label4->Text = L"目標直方圖";
			// 
			// Origin_Chart
			// 
			chartArea1->Name = L"ChartArea1";
			this->Origin_Chart->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->Origin_Chart->Legends->Add(legend1);
			this->Origin_Chart->Location = System::Drawing::Point(344, 58);
			this->Origin_Chart->Name = L"Origin_Chart";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Color = System::Drawing::Color::Red;
			series1->Legend = L"Legend1";
			series1->Name = L"Origin";
			this->Origin_Chart->Series->Add(series1);
			this->Origin_Chart->Size = System::Drawing::Size(333, 212);
			this->Origin_Chart->TabIndex = 6;
			this->Origin_Chart->Text = L"chart1";
			// 
			// Object_Chart
			// 
			chartArea2->Name = L"ChartArea1";
			this->Object_Chart->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->Object_Chart->Legends->Add(legend2);
			this->Object_Chart->Location = System::Drawing::Point(344, 327);
			this->Object_Chart->Name = L"Object_Chart";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Color = System::Drawing::Color::Lime;
			series2->Legend = L"Legend1";
			series2->Name = L"Object";
			this->Object_Chart->Series->Add(series2);
			this->Object_Chart->Size = System::Drawing::Size(345, 218);
			this->Object_Chart->TabIndex = 7;
			this->Object_Chart->Text = L"chart2";
			// 
			// Result_Chart
			// 
			chartArea3->Name = L"ChartArea1";
			this->Result_Chart->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->Result_Chart->Legends->Add(legend3);
			this->Result_Chart->Location = System::Drawing::Point(786, 333);
			this->Result_Chart->Name = L"Result_Chart";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series3->Legend = L"Legend1";
			series3->Name = L"Result";
			this->Result_Chart->Series->Add(series3);
			this->Result_Chart->Size = System::Drawing::Size(302, 196);
			this->Result_Chart->TabIndex = 8;
			this->Result_Chart->Text = L"chart3";
			// 
			// specific_result
			// 
			this->specific_result->Location = System::Drawing::Point(791, 87);
			this->specific_result->Name = L"specific_result";
			this->specific_result->Size = System::Drawing::Size(276, 195);
			this->specific_result->TabIndex = 9;
			this->specific_result->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(790, 34);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(41, 12);
			this->label5->TabIndex = 10;
			this->label5->Text = L"結果圖";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(800, 302);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(65, 12);
			this->label6->TabIndex = 11;
			this->label6->Text = L"結果直方圖";
			// 
			// Btn_SpecificationHistogram_Exit
			// 
			this->Btn_SpecificationHistogram_Exit->Location = System::Drawing::Point(1025, 535);
			this->Btn_SpecificationHistogram_Exit->Name = L"Btn_SpecificationHistogram_Exit";
			this->Btn_SpecificationHistogram_Exit->Size = System::Drawing::Size(63, 46);
			this->Btn_SpecificationHistogram_Exit->TabIndex = 12;
			this->Btn_SpecificationHistogram_Exit->Text = L"Exit";
			this->Btn_SpecificationHistogram_Exit->UseVisualStyleBackColor = true;
			this->Btn_SpecificationHistogram_Exit->Click += gcnew System::EventHandler(this, &SpecificationHistogram::Btn_SpecificationHistogram_Exit_Click);
			// 
			// SpecificationHistogram
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1151, 593);
			this->Controls->Add(this->Btn_SpecificationHistogram_Exit);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->specific_result);
			this->Controls->Add(this->Result_Chart);
			this->Controls->Add(this->Object_Chart);
			this->Controls->Add(this->Origin_Chart);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->specific_object);
			this->Controls->Add(this->specific_origin);
			this->Name = L"SpecificationHistogram";
			this->Text = L"SpecificationHistogram";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->specific_origin))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->specific_object))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Origin_Chart))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Object_Chart))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Result_Chart))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->specific_result))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Btn_SpecificationHistogram_Exit_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
};
}
