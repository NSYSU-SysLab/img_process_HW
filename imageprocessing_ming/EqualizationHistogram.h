#pragma once

namespace imageprocessing_ming {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// EqualizationHistogram ���K�n
	/// </summary>
	public ref class EqualizationHistogram : public System::Windows::Forms::Form
	{
	public:
		EqualizationHistogram(void)
		{
			InitializeComponent();
			//
			//TODO:  �b���[�J�غc�禡�{���X
			//
		}

	protected:
		/// <summary>
		/// �M������ϥΤ����귽�C
		/// </summary>
		~EqualizationHistogram()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::Button^  Btn_EqualizationHistogram_Exit;
	public:

	public:

	public:
	protected:

	private:
		/// <summary>
		/// �]�p�u��һݪ��ܼơC
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����]�p�u��䴩�һݪ���k - �ФŨϥε{���X�s�边�ק�
		/// �o�Ӥ�k�����e�C
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->Btn_EqualizationHistogram_Exit = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->ItemColumnSpacing = 1;
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(20, 42);
			this->chart1->Margin = System::Windows::Forms::Padding(2);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Legend = L"Legend1";
			series1->Name = L"Equalization";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(742, 383);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// Btn_EqualizationHistogram_Exit
			// 
			this->Btn_EqualizationHistogram_Exit->Location = System::Drawing::Point(690, 451);
			this->Btn_EqualizationHistogram_Exit->Name = L"Btn_EqualizationHistogram_Exit";
			this->Btn_EqualizationHistogram_Exit->Size = System::Drawing::Size(88, 41);
			this->Btn_EqualizationHistogram_Exit->TabIndex = 1;
			this->Btn_EqualizationHistogram_Exit->Text = L"Exit";
			this->Btn_EqualizationHistogram_Exit->UseVisualStyleBackColor = true;
			this->Btn_EqualizationHistogram_Exit->Click += gcnew System::EventHandler(this, &EqualizationHistogram::Btn_EqualizationHistogram_Exit_Click);
			// 
			// EqualizationHistogram
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(794, 506);
			this->Controls->Add(this->Btn_EqualizationHistogram_Exit);
			this->Controls->Add(this->chart1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"EqualizationHistogram";
			this->Text = L"EqualizationHistogram";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Btn_EqualizationHistogram_Exit_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
	};
}
