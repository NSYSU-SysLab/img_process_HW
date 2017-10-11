#pragma once

namespace imageprocessing_ming {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Bouncingball 的摘要
	/// </summary>
	public ref class Bouncingball : public System::Windows::Forms::Form
	{
	public:
		Bouncingball(void)
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
		~Bouncingball()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  start_ball;
	private: System::Windows::Forms::Button^  stop_ball;
	private: System::Windows::Forms::Button^  Btn_Bouncingball_Exit;

	protected:

	protected:


	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::PictureBox^  ball;

	private: System::ComponentModel::IContainer^  components;

	protected:

	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		int xmove_ = 6;
		int ymove_ = 4;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改
		/// 這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Bouncingball::typeid));
			this->start_ball = (gcnew System::Windows::Forms::Button());
			this->stop_ball = (gcnew System::Windows::Forms::Button());
			this->Btn_Bouncingball_Exit = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->ball = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ball))->BeginInit();
			this->SuspendLayout();
			// 
			// start_ball
			// 
			this->start_ball->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->start_ball->Location = System::Drawing::Point(39, 420);
			this->start_ball->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->start_ball->Name = L"start_ball";
			this->start_ball->Size = System::Drawing::Size(69, 33);
			this->start_ball->TabIndex = 1;
			this->start_ball->Text = L"Start";
			this->start_ball->UseVisualStyleBackColor = true;
			this->start_ball->Click += gcnew System::EventHandler(this, &Bouncingball::start_ball_Click);
			// 
			// stop_ball
			// 
			this->stop_ball->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->stop_ball->Location = System::Drawing::Point(161, 420);
			this->stop_ball->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->stop_ball->Name = L"stop_ball";
			this->stop_ball->Size = System::Drawing::Size(69, 33);
			this->stop_ball->TabIndex = 2;
			this->stop_ball->Text = L"Stop";
			this->stop_ball->UseVisualStyleBackColor = true;
			this->stop_ball->Click += gcnew System::EventHandler(this, &Bouncingball::stop_ball_Click);
			// 
			// Btn_Bouncingball_Exit
			// 
			this->Btn_Bouncingball_Exit->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Btn_Bouncingball_Exit->Location = System::Drawing::Point(287, 420);
			this->Btn_Bouncingball_Exit->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Btn_Bouncingball_Exit->Name = L"Btn_Bouncingball_Exit";
			this->Btn_Bouncingball_Exit->Size = System::Drawing::Size(71, 33);
			this->Btn_Bouncingball_Exit->TabIndex = 3;
			this->Btn_Bouncingball_Exit->Text = L"Exit";
			this->Btn_Bouncingball_Exit->UseVisualStyleBackColor = true;
			this->Btn_Bouncingball_Exit->Click += gcnew System::EventHandler(this, &Bouncingball::Btn_Bouncingball_Exit_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Bouncingball::timer1_Tick);
			// 
			// ball
			// 
			this->ball->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ball.Image")));
			this->ball->Location = System::Drawing::Point(0, 0);
			this->ball->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ball->Name = L"ball";
			this->ball->Size = System::Drawing::Size(75, 80);
			this->ball->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->ball->TabIndex = 4;
			this->ball->TabStop = false;
			// 
			// Bouncingball
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(436, 462);
			this->Controls->Add(this->ball);
			this->Controls->Add(this->Btn_Bouncingball_Exit);
			this->Controls->Add(this->stop_ball);
			this->Controls->Add(this->start_ball);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"Bouncingball";
			this->Text = L"Bouncingball";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ball))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void start_ball_Click(System::Object^  sender, System::EventArgs^  e) {
		timer1->Start();
	}
	private: System::Void stop_ball_Click(System::Object^  sender, System::EventArgs^  e) {
		timer1->Stop();
	}
	private: System::Void Btn_Bouncingball_Exit_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		ball->Left += xmove_;  //ball 為 picturebox的名字
		ball->Top += ymove_;

		if (ball->Right > 400) {
			xmove_ = -xmove_;
		}
		if (ball->Bottom > 400) {
			ymove_ = -ymove_;
		}
		if (ball->Left < 0) {
			xmove_ = -xmove_;
		}
		if (ball->Top < 0) {
			ymove_ = -ymove_;
		}
	}
};
}
