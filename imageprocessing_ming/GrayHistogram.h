#pragma once

namespace imageprocessing_ming {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// GrayHistogram 的摘要
	/// </summary>
	public ref class GrayHistogram : public System::Windows::Forms::Form
	{
	public:
		GrayHistogram(void)
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
		~GrayHistogram()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::DataVisualization::Charting::Chart^  Gray_Chart;
	protected:

	private: System::Windows::Forms::Button^  Btn_GrayHistogram_Exit;
	public:

	public:
	protected:

	protected:

	protected:

	protected:

	protected:

	protected:

	protected:

	protected:

	protected:

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
			this->Gray_Chart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->Btn_GrayHistogram_Exit = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Gray_Chart))->BeginInit();
			this->SuspendLayout();
			// 
			// Gray_Chart
			// 
			chartArea1->Name = L"ChartArea1";
			this->Gray_Chart->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->Gray_Chart->Legends->Add(legend1);
			this->Gray_Chart->Location = System::Drawing::Point(55, 52);
			this->Gray_Chart->Name = L"Gray_Chart";
			series1->ChartArea = L"ChartArea1";
			series1->Color = System::Drawing::Color::Gray;
			series1->Legend = L"Legend1";
			series1->Name = L"Gray";
			this->Gray_Chart->Series->Add(series1);
			this->Gray_Chart->Size = System::Drawing::Size(1000, 500);
			this->Gray_Chart->TabIndex = 0;
			this->Gray_Chart->Text = L"chart1";
			// 
			// Btn_GrayHistogram_Exit
			// 
			this->Btn_GrayHistogram_Exit->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Btn_GrayHistogram_Exit->Location = System::Drawing::Point(951, 570);
			this->Btn_GrayHistogram_Exit->Name = L"Btn_GrayHistogram_Exit";
			this->Btn_GrayHistogram_Exit->Size = System::Drawing::Size(90, 42);
			this->Btn_GrayHistogram_Exit->TabIndex = 1;
			this->Btn_GrayHistogram_Exit->Text = L"Exit";
			this->Btn_GrayHistogram_Exit->UseVisualStyleBackColor = true;
			this->Btn_GrayHistogram_Exit->Click += gcnew System::EventHandler(this, &GrayHistogram::Btn_GrayHistogram_Exit_Click);
			// 
			// GrayHistogram
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1082, 653);
			this->Controls->Add(this->Btn_GrayHistogram_Exit);
			this->Controls->Add(this->Gray_Chart);
			this->Name = L"GrayHistogram";
			this->Text = L"GrayHistogram";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Gray_Chart))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Btn_GrayHistogram_Exit_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
};
}
