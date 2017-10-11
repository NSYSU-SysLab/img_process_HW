#pragma once

namespace imageprocessing_ming {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// OtsuHistogram 的摘要
	/// </summary>
	public ref class OtsuHistogram : public System::Windows::Forms::Form
	{
	public:
		OtsuHistogram(void)
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
		~OtsuHistogram()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::DataVisualization::Charting::Chart^  Otsu_Chart;
	protected:

	private: System::Windows::Forms::Button^  Btn_OtsuHistogram_Exit;

	protected:

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
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->Otsu_Chart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->Btn_OtsuHistogram_Exit = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Otsu_Chart))->BeginInit();
			this->SuspendLayout();
			// 
			// Otsu_Chart
			// 
			chartArea1->Name = L"ChartArea1";
			this->Otsu_Chart->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->Otsu_Chart->Legends->Add(legend1);
			this->Otsu_Chart->Location = System::Drawing::Point(101, 39);
			this->Otsu_Chart->Name = L"Otsu_Chart";
			series1->ChartArea = L"ChartArea1";
			series1->Color = System::Drawing::Color::Gray;
			series1->Legend = L"Legend1";
			series1->Name = L"Gray";
			series2->ChartArea = L"ChartArea1";
			series2->Color = System::Drawing::Color::Red;
			series2->Legend = L"Legend1";
			series2->Name = L"Otsu";
			this->Otsu_Chart->Series->Add(series1);
			this->Otsu_Chart->Series->Add(series2);
			this->Otsu_Chart->Size = System::Drawing::Size(782, 482);
			this->Otsu_Chart->TabIndex = 0;
			this->Otsu_Chart->Text = L"chart1";
			// 
			// Btn_OtsuHistogram_Exit
			// 
			this->Btn_OtsuHistogram_Exit->Location = System::Drawing::Point(908, 525);
			this->Btn_OtsuHistogram_Exit->Name = L"Btn_OtsuHistogram_Exit";
			this->Btn_OtsuHistogram_Exit->Size = System::Drawing::Size(79, 57);
			this->Btn_OtsuHistogram_Exit->TabIndex = 1;
			this->Btn_OtsuHistogram_Exit->Text = L"Exit";
			this->Btn_OtsuHistogram_Exit->UseVisualStyleBackColor = true;
			this->Btn_OtsuHistogram_Exit->Click += gcnew System::EventHandler(this, &OtsuHistogram::Btn_OtsuHistogram_Exit_Click);
			// 
			// OtsuHistogram
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1066, 594);
			this->Controls->Add(this->Btn_OtsuHistogram_Exit);
			this->Controls->Add(this->Otsu_Chart);
			this->Name = L"OtsuHistogram";
			this->Text = L"OtsuHistogram";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Otsu_Chart))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Btn_OtsuHistogram_Exit_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
	};
}
