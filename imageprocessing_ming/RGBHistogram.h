#pragma once

namespace imageprocessing_ming {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// RGBHistogram 的摘要
	/// </summary>
	public ref class RGBHistogram : public System::Windows::Forms::Form
	{
	public:
		RGBHistogram(void)
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
		~RGBHistogram()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::DataVisualization::Charting::Chart^  RGB_Chart;  //記得改成public
	private: System::Windows::Forms::Button^  Btn_RGBHistogram_Exit;
	public:

	public:
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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->RGB_Chart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->Btn_RGBHistogram_Exit = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RGB_Chart))->BeginInit();
			this->SuspendLayout();
			// 
			// RGB_Chart
			// 
			chartArea2->Name = L"ChartArea1";
			this->RGB_Chart->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->RGB_Chart->Legends->Add(legend2);
			this->RGB_Chart->Location = System::Drawing::Point(54, 72);
			this->RGB_Chart->Name = L"RGB_Chart";
			series4->ChartArea = L"ChartArea1";
			series4->Color = System::Drawing::Color::Red;
			series4->Legend = L"Legend1";
			series4->Name = L"Red";
			series5->ChartArea = L"ChartArea1";
			series5->Color = System::Drawing::Color::Lime;
			series5->Legend = L"Legend1";
			series5->Name = L"Green";
			series6->ChartArea = L"ChartArea1";
			series6->Color = System::Drawing::Color::Blue;
			series6->Legend = L"Legend1";
			series6->Name = L"Blue";
			this->RGB_Chart->Series->Add(series4);
			this->RGB_Chart->Series->Add(series5);
			this->RGB_Chart->Series->Add(series6);
			this->RGB_Chart->Size = System::Drawing::Size(1000, 500);
			this->RGB_Chart->TabIndex = 0;
			this->RGB_Chart->Text = L"chart1";
			// 
			// Btn_RGBHistogram_Exit
			// 
			this->Btn_RGBHistogram_Exit->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Btn_RGBHistogram_Exit->Location = System::Drawing::Point(935, 578);
			this->Btn_RGBHistogram_Exit->Name = L"Btn_RGBHistogram_Exit";
			this->Btn_RGBHistogram_Exit->Size = System::Drawing::Size(98, 57);
			this->Btn_RGBHistogram_Exit->TabIndex = 1;
			this->Btn_RGBHistogram_Exit->Text = L"Exit";
			this->Btn_RGBHistogram_Exit->UseVisualStyleBackColor = true;
			this->Btn_RGBHistogram_Exit->Click += gcnew System::EventHandler(this, &RGBHistogram::Btn_RGBHistogram_Exit_Click);
			// 
			// RGBHistogram
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1082, 653);
			this->Controls->Add(this->Btn_RGBHistogram_Exit);
			this->Controls->Add(this->RGB_Chart);
			this->Name = L"RGBHistogram";
			this->Text = L"RGBHistogram";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RGB_Chart))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Btn_RGBHistogram_Exit_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
};
}
