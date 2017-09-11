#pragma once
#include < stdio.h >  
#include < stdlib.h >  
#include"vcclr.h"
#include<time.h>
#include"Bouncingball.h"
#include"GrayHistogram.h"

namespace imageprocessing_ming {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	enum BitmapImageProcessing
	{
		RGB2Gray,
		RGB2Gray_Inverse,
		ToRed,
		ToGreen,
		ToBlue,
		RGB_Inverse,
		Horizontal,
		Vertical,
	    Diagonal,
		Threshold_Binary,
		Threshold_Binary_Inverse,
		Duplication,  //複製
		Other
	};

	enum Pen_Select
	{
		Pen_None,
		Pen_Line,
		Pen_Circle,
		Pen_Rect
	};
	/// <summary>
	/// MyForm 的摘要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  openfileToolStripMenuItem;
	private: System::Windows::Forms::BindingSource^  bindingSource1;
	private: System::Windows::Forms::GroupBox^  groupbox1;
	private: System::Windows::Forms::ToolStrip^  toolStrip3;
	private: System::Windows::Forms::ToolStripButton^  Btn_Threshold;

	private: System::Windows::Forms::ToolStrip^  toolStrip2;
	private: System::Windows::Forms::ToolStripButton^  Btn_ToRed;

	private: System::Windows::Forms::ToolStripButton^  Btn_ToGreen;
	private: System::Windows::Forms::ToolStripButton^  Btn_ToBlue;


	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::ToolStripButton^  Btn_Gray;



	private: System::ComponentModel::IContainer^  components;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  Exit;

	private: System::Windows::Forms::PictureBox^  pictureBox2;



	private: System::Windows::Forms::ToolStrip^  toolStrip5;
	private: System::Windows::Forms::ToolStripButton^  Btn_Bouncing_Ball;



	private:
		/// <summary>
		/// 設計工具所需的變數。
		Bitmap ^img_source;
		Bitmap ^img_source2;
		Point LBtnDown;
		int d_Pen;
		

	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::ToolStrip^  toolStrip8;
	private: System::Windows::Forms::ToolStripButton^  Btn_Diagonal_Flip;

	private: System::Windows::Forms::ToolStrip^  toolStrip7;
	private: System::Windows::Forms::ToolStripButton^  Btn_Vertical_Flip;


	private: System::Windows::Forms::ToolStrip^  toolStrip6;
	private: System::Windows::Forms::ToolStripButton^  Btn_Horizontal_Flip;
	private: System::Windows::Forms::GroupBox^  groupBox3;


	private: System::Windows::Forms::ToolStrip^  toolStrip10;
	private: System::Windows::Forms::ToolStripButton^  Btn_Zoom;

	private: System::Windows::Forms::ToolStrip^  toolStrip9;
	private: System::Windows::Forms::ToolStripTextBox^  Textbox_ZoomRate;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::RadioButton^  Btn_Rectangle;


	private: System::Windows::Forms::RadioButton^  Btn_Circle;

	private: System::Windows::Forms::RadioButton^  Btn_Line;

	private: System::Windows::Forms::RadioButton^  Btn_None_Draw;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  Pos_x;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  Pos_y;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  Pos_RGBvalue;



	private: System::Windows::Forms::ToolStripButton^  Btn_RGB_Inverse;
	private: System::Windows::Forms::Button^  Btn_Reset;
private: System::Windows::Forms::ToolStripButton^  Btn_Threshold_Inverse;
private: System::Windows::Forms::ToolStripButton^  Btn_Gray_Inverse;
private: System::Windows::Forms::GroupBox^  groupBox5;
private: System::Windows::Forms::TabControl^  tabControl1;
private: System::Windows::Forms::TabPage^  tabPage1;
private: System::Windows::Forms::TabPage^  tabPage2;
private: System::Windows::Forms::PictureBox^  pictureBox3;
private: System::Windows::Forms::ToolStripMenuItem^  openfile2ToolStripMenuItem;
private: System::Windows::Forms::GroupBox^  groupBox6;
private: System::Windows::Forms::TrackBar^  overlapping_trackbar;
private: System::Windows::Forms::ToolStrip^  toolStrip4;
private: System::Windows::Forms::ToolStripButton^  Btn_overlapping;
private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::GroupBox^  groupBox7;
private: System::Windows::Forms::ToolStrip^  toolStrip14;
private: System::Windows::Forms::ToolStripButton^  toolStripButton4;
private: System::Windows::Forms::ToolStrip^  toolStrip13;
private: System::Windows::Forms::ToolStripButton^  toolStripButton3;
private: System::Windows::Forms::ToolStrip^  toolStrip12;
private: System::Windows::Forms::ToolStripButton^  toolStripButton2;
private: System::Windows::Forms::ToolStrip^  toolStrip11;
private: System::Windows::Forms::ToolStripButton^  Btn_Gray_Histogran;






	private: System::Windows::Forms::Label^  label2;


			 /// </summary>
		

#pragma region Windows Form Designer generated code
		ref struct PCXData  //http://www.fysnet.net/pcxfile.htm  PCX解封包資料
		{
			String ^filepath; //檔案路徑
			String ^filename; //檔案名稱
			String ^Manufacture; //Zsotf ID
			int version; //版本
			int Encoding; //PCX run-length encoding
			int Hdpi; //(horizontal) dots per inch 
			int Vdpi; //(vertical) dots per inch
			int reserved;
			String ^Nplane;
			String ^color; //灰階 色彩
			int Hscreensize; //video screen size(horizontal)
			int Vscreensize; //video screen size(vertical)
			Bitmap ^image;
			int BytePerLine;
			int BitsPerPixel;
			Bitmap ^Colormap;
		};
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改
		/// 這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openfileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openfile2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->groupbox1 = (gcnew System::Windows::Forms::GroupBox());
			this->toolStrip5 = (gcnew System::Windows::Forms::ToolStrip());
			this->Btn_Bouncing_Ball = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStrip3 = (gcnew System::Windows::Forms::ToolStrip());
			this->Btn_Threshold = (gcnew System::Windows::Forms::ToolStripButton());
			this->Btn_Threshold_Inverse = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStrip2 = (gcnew System::Windows::Forms::ToolStrip());
			this->Btn_ToRed = (gcnew System::Windows::Forms::ToolStripButton());
			this->Btn_ToGreen = (gcnew System::Windows::Forms::ToolStripButton());
			this->Btn_ToBlue = (gcnew System::Windows::Forms::ToolStripButton());
			this->Btn_RGB_Inverse = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->Btn_Gray = (gcnew System::Windows::Forms::ToolStripButton());
			this->Btn_Gray_Inverse = (gcnew System::Windows::Forms::ToolStripButton());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->toolStrip8 = (gcnew System::Windows::Forms::ToolStrip());
			this->Btn_Diagonal_Flip = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStrip7 = (gcnew System::Windows::Forms::ToolStrip());
			this->Btn_Vertical_Flip = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStrip6 = (gcnew System::Windows::Forms::ToolStrip());
			this->Btn_Horizontal_Flip = (gcnew System::Windows::Forms::ToolStripButton());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->toolStrip10 = (gcnew System::Windows::Forms::ToolStrip());
			this->Btn_Zoom = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStrip9 = (gcnew System::Windows::Forms::ToolStrip());
			this->Textbox_ZoomRate = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->Btn_Rectangle = (gcnew System::Windows::Forms::RadioButton());
			this->Btn_Circle = (gcnew System::Windows::Forms::RadioButton());
			this->Btn_Line = (gcnew System::Windows::Forms::RadioButton());
			this->Btn_None_Draw = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Pos_x = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Pos_y = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Pos_RGBvalue = (gcnew System::Windows::Forms::Label());
			this->Btn_Reset = (gcnew System::Windows::Forms::Button());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->overlapping_trackbar = (gcnew System::Windows::Forms::TrackBar());
			this->toolStrip4 = (gcnew System::Windows::Forms::ToolStrip());
			this->Btn_overlapping = (gcnew System::Windows::Forms::ToolStripButton());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->toolStrip11 = (gcnew System::Windows::Forms::ToolStrip());
			this->Btn_Gray_Histogran = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStrip12 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStrip13 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStrip14 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton3 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton4 = (gcnew System::Windows::Forms::ToolStripButton());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->groupbox1->SuspendLayout();
			this->toolStrip5->SuspendLayout();
			this->toolStrip3->SuspendLayout();
			this->toolStrip2->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->toolStrip8->SuspendLayout();
			this->toolStrip7->SuspendLayout();
			this->toolStrip6->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->toolStrip10->SuspendLayout();
			this->toolStrip9->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->groupBox6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->overlapping_trackbar))->BeginInit();
			this->toolStrip4->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->toolStrip11->SuspendLayout();
			this->toolStrip12->SuspendLayout();
			this->toolStrip13->SuspendLayout();
			this->toolStrip14->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fileToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1274, 27);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->openfileToolStripMenuItem,
					this->openfile2ToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(45, 23);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// openfileToolStripMenuItem
			// 
			this->openfileToolStripMenuItem->Name = L"openfileToolStripMenuItem";
			this->openfileToolStripMenuItem->Size = System::Drawing::Size(152, 26);
			this->openfileToolStripMenuItem->Text = L"Openfile";
			this->openfileToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openfileToolStripMenuItem_Click);
			// 
			// openfile2ToolStripMenuItem
			// 
			this->openfile2ToolStripMenuItem->Name = L"openfile2ToolStripMenuItem";
			this->openfile2ToolStripMenuItem->Size = System::Drawing::Size(152, 26);
			this->openfile2ToolStripMenuItem->Text = L"Openfile2";
			this->openfile2ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openfile2ToolStripMenuItem_Click);
			// 
			// groupbox1
			// 
			this->groupbox1->Controls->Add(this->toolStrip5);
			this->groupbox1->Controls->Add(this->toolStrip3);
			this->groupbox1->Controls->Add(this->toolStrip2);
			this->groupbox1->Controls->Add(this->toolStrip1);
			this->groupbox1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->groupbox1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->groupbox1->Location = System::Drawing::Point(0, 30);
			this->groupbox1->Name = L"groupbox1";
			this->groupbox1->Size = System::Drawing::Size(137, 186);
			this->groupbox1->TabIndex = 1;
			this->groupbox1->TabStop = false;
			this->groupbox1->Text = L"色彩轉換";
			// 
			// toolStrip5
			// 
			this->toolStrip5->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip5->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->Btn_Bouncing_Ball });
			this->toolStrip5->Location = System::Drawing::Point(3, 111);
			this->toolStrip5->Name = L"toolStrip5";
			this->toolStrip5->Size = System::Drawing::Size(131, 27);
			this->toolStrip5->TabIndex = 4;
			this->toolStrip5->Text = L"toolStrip5";
			// 
			// Btn_Bouncing_Ball
			// 
			this->Btn_Bouncing_Ball->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_Bouncing_Ball.Image")));
			this->Btn_Bouncing_Ball->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->Btn_Bouncing_Ball->Name = L"Btn_Bouncing_Ball";
			this->Btn_Bouncing_Ball->Size = System::Drawing::Size(78, 24);
			this->Btn_Bouncing_Ball->Text = L"彈力球";
			this->Btn_Bouncing_Ball->Click += gcnew System::EventHandler(this, &MyForm::Btn_Bouncing_Ball_Click);
			// 
			// toolStrip3
			// 
			this->toolStrip3->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip3->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->Btn_Threshold, this->Btn_Threshold_Inverse });
			this->toolStrip3->Location = System::Drawing::Point(3, 84);
			this->toolStrip3->Name = L"toolStrip3";
			this->toolStrip3->Size = System::Drawing::Size(131, 27);
			this->toolStrip3->TabIndex = 2;
			this->toolStrip3->Text = L"toolStrip3";
			// 
			// Btn_Threshold
			// 
			this->Btn_Threshold->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_Threshold.Image")));
			this->Btn_Threshold->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->Btn_Threshold->Name = L"Btn_Threshold";
			this->Btn_Threshold->Size = System::Drawing::Size(78, 24);
			this->Btn_Threshold->Text = L"二值化";
			this->Btn_Threshold->Click += gcnew System::EventHandler(this, &MyForm::Btn_Threshold_Click);
			// 
			// Btn_Threshold_Inverse
			// 
			this->Btn_Threshold_Inverse->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_Threshold_Inverse.Image")));
			this->Btn_Threshold_Inverse->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->Btn_Threshold_Inverse->Name = L"Btn_Threshold_Inverse";
			this->Btn_Threshold_Inverse->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Btn_Threshold_Inverse->Size = System::Drawing::Size(93, 24);
			this->Btn_Threshold_Inverse->Text = L"逆二值化";
			this->Btn_Threshold_Inverse->Click += gcnew System::EventHandler(this, &MyForm::Btn_Threshold_Inverse_Click_1);
			// 
			// toolStrip2
			// 
			this->toolStrip2->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->Btn_ToRed, this->Btn_ToGreen,
					this->Btn_ToBlue, this->Btn_RGB_Inverse
			});
			this->toolStrip2->Location = System::Drawing::Point(3, 57);
			this->toolStrip2->Name = L"toolStrip2";
			this->toolStrip2->Size = System::Drawing::Size(131, 27);
			this->toolStrip2->TabIndex = 1;
			this->toolStrip2->Text = L"toolStrip2";
			// 
			// Btn_ToRed
			// 
			this->Btn_ToRed->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->Btn_ToRed->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Btn_ToRed->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->Btn_ToRed->Name = L"Btn_ToRed";
			this->Btn_ToRed->Size = System::Drawing::Size(23, 24);
			this->Btn_ToRed->Text = L"R";
			this->Btn_ToRed->ToolTipText = L"R";
			this->Btn_ToRed->Click += gcnew System::EventHandler(this, &MyForm::Btn_ToRed_Click);
			// 
			// Btn_ToGreen
			// 
			this->Btn_ToGreen->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->Btn_ToGreen->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Btn_ToGreen->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->Btn_ToGreen->Name = L"Btn_ToGreen";
			this->Btn_ToGreen->Size = System::Drawing::Size(24, 24);
			this->Btn_ToGreen->Text = L"G";
			this->Btn_ToGreen->ToolTipText = L"G";
			this->Btn_ToGreen->Click += gcnew System::EventHandler(this, &MyForm::Btn_ToGreen_Click);
			// 
			// Btn_ToBlue
			// 
			this->Btn_ToBlue->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->Btn_ToBlue->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Btn_ToBlue->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->Btn_ToBlue->Name = L"Btn_ToBlue";
			this->Btn_ToBlue->Size = System::Drawing::Size(23, 24);
			this->Btn_ToBlue->Text = L"B";
			this->Btn_ToBlue->ToolTipText = L"B";
			this->Btn_ToBlue->Click += gcnew System::EventHandler(this, &MyForm::Btn_ToBlue_Click);
			// 
			// Btn_RGB_Inverse
			// 
			this->Btn_RGB_Inverse->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_RGB_Inverse.Image")));
			this->Btn_RGB_Inverse->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->Btn_RGB_Inverse->Name = L"Btn_RGB_Inverse";
			this->Btn_RGB_Inverse->Size = System::Drawing::Size(78, 24);
			this->Btn_RGB_Inverse->Text = L"逆RGB";
			this->Btn_RGB_Inverse->Click += gcnew System::EventHandler(this, &MyForm::Btn_RGB_Inverse_Click);
			// 
			// toolStrip1
			// 
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->Btn_Gray, this->Btn_Gray_Inverse });
			this->toolStrip1->Location = System::Drawing::Point(3, 30);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(131, 27);
			this->toolStrip1->TabIndex = 0;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// Btn_Gray
			// 
			this->Btn_Gray->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_Gray.Image")));
			this->Btn_Gray->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->Btn_Gray->Name = L"Btn_Gray";
			this->Btn_Gray->Size = System::Drawing::Size(63, 24);
			this->Btn_Gray->Text = L"灰階";
			this->Btn_Gray->ToolTipText = L"灰階";
			this->Btn_Gray->Click += gcnew System::EventHandler(this, &MyForm::Btn_Gray_Click);
			// 
			// Btn_Gray_Inverse
			// 
			this->Btn_Gray_Inverse->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_Gray_Inverse.Image")));
			this->Btn_Gray_Inverse->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->Btn_Gray_Inverse->Name = L"Btn_Gray_Inverse";
			this->Btn_Gray_Inverse->Size = System::Drawing::Size(78, 24);
			this->Btn_Gray_Inverse->Text = L"逆灰階";
			this->Btn_Gray_Inverse->ToolTipText = L"toolStripButton1";
			this->Btn_Gray_Inverse->Click += gcnew System::EventHandler(this, &MyForm::Btn_Gray_Inverse_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(700, 600);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseMove);
			// 
			// Exit
			// 
			this->Exit->Location = System::Drawing::Point(163, 3);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(75, 23);
			this->Exit->TabIndex = 3;
			this->Exit->Text = L"Exit";
			this->Exit->UseVisualStyleBackColor = true;
			this->Exit->Click += gcnew System::EventHandler(this, &MyForm::Exit_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(1004, 243);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(100, 100);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 4;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox2_MouseDown);
			this->pictureBox2->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox2_MouseMove);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->toolStrip8);
			this->groupBox2->Controls->Add(this->toolStrip7);
			this->groupBox2->Controls->Add(this->toolStrip6);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->groupBox2->Location = System::Drawing::Point(153, 32);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(164, 162);
			this->groupBox2->TabIndex = 5;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"鏡射";
			// 
			// toolStrip8
			// 
			this->toolStrip8->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip8->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->Btn_Diagonal_Flip });
			this->toolStrip8->Location = System::Drawing::Point(3, 84);
			this->toolStrip8->Name = L"toolStrip8";
			this->toolStrip8->Size = System::Drawing::Size(158, 27);
			this->toolStrip8->TabIndex = 2;
			this->toolStrip8->Text = L"toolStrip8";
			// 
			// Btn_Diagonal_Flip
			// 
			this->Btn_Diagonal_Flip->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_Diagonal_Flip.Image")));
			this->Btn_Diagonal_Flip->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->Btn_Diagonal_Flip->Name = L"Btn_Diagonal_Flip";
			this->Btn_Diagonal_Flip->Size = System::Drawing::Size(93, 24);
			this->Btn_Diagonal_Flip->Text = L"對角鏡射";
			this->Btn_Diagonal_Flip->Click += gcnew System::EventHandler(this, &MyForm::Btn_Diagonal_Flip_Click);
			// 
			// toolStrip7
			// 
			this->toolStrip7->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip7->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->Btn_Vertical_Flip });
			this->toolStrip7->Location = System::Drawing::Point(3, 57);
			this->toolStrip7->Name = L"toolStrip7";
			this->toolStrip7->Size = System::Drawing::Size(158, 27);
			this->toolStrip7->TabIndex = 1;
			this->toolStrip7->Text = L"toolStrip7";
			// 
			// Btn_Vertical_Flip
			// 
			this->Btn_Vertical_Flip->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_Vertical_Flip.Image")));
			this->Btn_Vertical_Flip->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->Btn_Vertical_Flip->Name = L"Btn_Vertical_Flip";
			this->Btn_Vertical_Flip->Size = System::Drawing::Size(93, 24);
			this->Btn_Vertical_Flip->Text = L"垂直鏡射";
			this->Btn_Vertical_Flip->Click += gcnew System::EventHandler(this, &MyForm::Btn_Vertical_Flip_Click);
			// 
			// toolStrip6
			// 
			this->toolStrip6->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip6->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->Btn_Horizontal_Flip });
			this->toolStrip6->Location = System::Drawing::Point(3, 30);
			this->toolStrip6->Name = L"toolStrip6";
			this->toolStrip6->Size = System::Drawing::Size(158, 27);
			this->toolStrip6->TabIndex = 0;
			this->toolStrip6->Text = L"toolStrip6";
			// 
			// Btn_Horizontal_Flip
			// 
			this->Btn_Horizontal_Flip->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_Horizontal_Flip.Image")));
			this->Btn_Horizontal_Flip->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->Btn_Horizontal_Flip->Name = L"Btn_Horizontal_Flip";
			this->Btn_Horizontal_Flip->Size = System::Drawing::Size(93, 24);
			this->Btn_Horizontal_Flip->Text = L"水平鏡射";
			this->Btn_Horizontal_Flip->Click += gcnew System::EventHandler(this, &MyForm::Btn_Horizontal_Flip_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label2);
			this->groupBox3->Controls->Add(this->toolStrip10);
			this->groupBox3->Controls->Add(this->toolStrip9);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->groupBox3->Location = System::Drawing::Point(336, 38);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(137, 86);
			this->groupBox3->TabIndex = 6;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"縮放";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label2->Location = System::Drawing::Point(16, 35);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 19);
			this->label2->TabIndex = 2;
			this->label2->Text = L"縮放倍率";
			// 
			// toolStrip10
			// 
			this->toolStrip10->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip10->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->Btn_Zoom });
			this->toolStrip10->Location = System::Drawing::Point(3, 57);
			this->toolStrip10->Name = L"toolStrip10";
			this->toolStrip10->Size = System::Drawing::Size(131, 27);
			this->toolStrip10->TabIndex = 1;
			this->toolStrip10->Text = L"toolStrip10";
			// 
			// Btn_Zoom
			// 
			this->Btn_Zoom->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_Zoom.Image")));
			this->Btn_Zoom->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->Btn_Zoom->Name = L"Btn_Zoom";
			this->Btn_Zoom->Size = System::Drawing::Size(93, 24);
			this->Btn_Zoom->Text = L"複製縮放";
			this->Btn_Zoom->Click += gcnew System::EventHandler(this, &MyForm::Btn_Zoom_Click);
			// 
			// toolStrip9
			// 
			this->toolStrip9->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip9->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->Textbox_ZoomRate });
			this->toolStrip9->Location = System::Drawing::Point(3, 30);
			this->toolStrip9->Name = L"toolStrip9";
			this->toolStrip9->Size = System::Drawing::Size(131, 27);
			this->toolStrip9->TabIndex = 0;
			this->toolStrip9->Text = L"toolStrip9";
			// 
			// Textbox_ZoomRate
			// 
			this->Textbox_ZoomRate->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->Textbox_ZoomRate->Name = L"Textbox_ZoomRate";
			this->Textbox_ZoomRate->Size = System::Drawing::Size(40, 27);
			this->Textbox_ZoomRate->Text = L"1";
			this->Textbox_ZoomRate->TextBoxTextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->Btn_Rectangle);
			this->groupBox4->Controls->Add(this->Btn_Circle);
			this->groupBox4->Controls->Add(this->Btn_Line);
			this->groupBox4->Controls->Add(this->Btn_None_Draw);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->groupBox4->Location = System::Drawing::Point(479, 38);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(153, 156);
			this->groupBox4->TabIndex = 7;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"繪圖工具";
			// 
			// Btn_Rectangle
			// 
			this->Btn_Rectangle->AutoSize = true;
			this->Btn_Rectangle->Location = System::Drawing::Point(11, 121);
			this->Btn_Rectangle->Name = L"Btn_Rectangle";
			this->Btn_Rectangle->Size = System::Drawing::Size(73, 29);
			this->Btn_Rectangle->TabIndex = 3;
			this->Btn_Rectangle->TabStop = true;
			this->Btn_Rectangle->Text = L"矩形";
			this->Btn_Rectangle->UseVisualStyleBackColor = true;
			this->Btn_Rectangle->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Btn_Rectangle_CheckedChanged);
			// 
			// Btn_Circle
			// 
			this->Btn_Circle->AutoSize = true;
			this->Btn_Circle->Location = System::Drawing::Point(11, 92);
			this->Btn_Circle->Name = L"Btn_Circle";
			this->Btn_Circle->Size = System::Drawing::Size(73, 29);
			this->Btn_Circle->TabIndex = 2;
			this->Btn_Circle->TabStop = true;
			this->Btn_Circle->Text = L"圓形";
			this->Btn_Circle->UseVisualStyleBackColor = true;
			this->Btn_Circle->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Btn_Circle_CheckedChanged);
			// 
			// Btn_Line
			// 
			this->Btn_Line->AutoSize = true;
			this->Btn_Line->Location = System::Drawing::Point(11, 57);
			this->Btn_Line->Name = L"Btn_Line";
			this->Btn_Line->Size = System::Drawing::Size(73, 29);
			this->Btn_Line->TabIndex = 1;
			this->Btn_Line->TabStop = true;
			this->Btn_Line->Text = L"直線";
			this->Btn_Line->UseVisualStyleBackColor = true;
			this->Btn_Line->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Btn_Line_CheckedChanged);
			// 
			// Btn_None_Draw
			// 
			this->Btn_None_Draw->AutoSize = true;
			this->Btn_None_Draw->Location = System::Drawing::Point(11, 32);
			this->Btn_None_Draw->Name = L"Btn_None_Draw";
			this->Btn_None_Draw->Size = System::Drawing::Size(53, 29);
			this->Btn_None_Draw->TabIndex = 0;
			this->Btn_None_Draw->TabStop = true;
			this->Btn_None_Draw->Text = L"無";
			this->Btn_None_Draw->UseVisualStyleBackColor = true;
			this->Btn_None_Draw->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Btn_None_Draw_CheckedChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point(149, 200);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(22, 19);
			this->label1->TabIndex = 8;
			this->label1->Text = L"X:";
			// 
			// Pos_x
			// 
			this->Pos_x->AutoSize = true;
			this->Pos_x->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Pos_x->Location = System::Drawing::Point(177, 200);
			this->Pos_x->Name = L"Pos_x";
			this->Pos_x->Size = System::Drawing::Size(51, 19);
			this->Pos_x->TabIndex = 9;
			this->Pos_x->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label3->Location = System::Drawing::Point(270, 200);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(21, 19);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Y:";
			// 
			// Pos_y
			// 
			this->Pos_y->AutoSize = true;
			this->Pos_y->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Pos_y->Location = System::Drawing::Point(297, 200);
			this->Pos_y->Name = L"Pos_y";
			this->Pos_y->Size = System::Drawing::Size(51, 19);
			this->Pos_y->TabIndex = 11;
			this->Pos_y->Text = L"label4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label5->Location = System::Drawing::Point(395, 200);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(42, 19);
			this->label5->TabIndex = 12;
			this->label5->Text = L"RGB:";
			// 
			// Pos_RGBvalue
			// 
			this->Pos_RGBvalue->AutoSize = true;
			this->Pos_RGBvalue->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Pos_RGBvalue->Location = System::Drawing::Point(443, 200);
			this->Pos_RGBvalue->Name = L"Pos_RGBvalue";
			this->Pos_RGBvalue->Size = System::Drawing::Size(51, 19);
			this->Pos_RGBvalue->TabIndex = 13;
			this->Pos_RGBvalue->Text = L"label6";
			// 
			// Btn_Reset
			// 
			this->Btn_Reset->Location = System::Drawing::Point(78, 4);
			this->Btn_Reset->Name = L"Btn_Reset";
			this->Btn_Reset->Size = System::Drawing::Size(75, 23);
			this->Btn_Reset->TabIndex = 17;
			this->Btn_Reset->Text = L"Reset";
			this->Btn_Reset->UseVisualStyleBackColor = true;
			this->Btn_Reset->Click += gcnew System::EventHandler(this, &MyForm::Btn_Reset_Click);
			// 
			// groupBox5
			// 
			this->groupBox5->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->groupBox5->Location = System::Drawing::Point(638, 32);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(200, 100);
			this->groupBox5->TabIndex = 18;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"旋轉";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(3, 222);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(900, 700);
			this->tabControl1->TabIndex = 19;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->pictureBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(892, 671);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"tabPage1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->pictureBox3);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(892, 671);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(7, 18);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(520, 360);
			this->pictureBox3->TabIndex = 0;
			this->pictureBox3->TabStop = false;
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->label4);
			this->groupBox6->Controls->Add(this->overlapping_trackbar);
			this->groupBox6->Controls->Add(this->toolStrip4);
			this->groupBox6->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->groupBox6->Location = System::Drawing::Point(830, 31);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(139, 137);
			this->groupBox6->TabIndex = 20;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"透明度";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(22, 109);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(69, 25);
			this->label4->TabIndex = 21;
			this->label4->Text = L"label4";
			// 
			// overlapping_trackbar
			// 
			this->overlapping_trackbar->Location = System::Drawing::Point(8, 73);
			this->overlapping_trackbar->Maximum = 100;
			this->overlapping_trackbar->Name = L"overlapping_trackbar";
			this->overlapping_trackbar->Size = System::Drawing::Size(104, 56);
			this->overlapping_trackbar->TabIndex = 1;
			this->overlapping_trackbar->Visible = false;
			this->overlapping_trackbar->Scroll += gcnew System::EventHandler(this, &MyForm::overlapping_trackbar_Scroll);
			// 
			// toolStrip4
			// 
			this->toolStrip4->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip4->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->Btn_overlapping });
			this->toolStrip4->Location = System::Drawing::Point(3, 30);
			this->toolStrip4->Name = L"toolStrip4";
			this->toolStrip4->Size = System::Drawing::Size(133, 27);
			this->toolStrip4->TabIndex = 0;
			this->toolStrip4->Text = L"toolStrip4";
			// 
			// Btn_overlapping
			// 
			this->Btn_overlapping->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_overlapping.Image")));
			this->Btn_overlapping->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->Btn_overlapping->Name = L"Btn_overlapping";
			this->Btn_overlapping->Size = System::Drawing::Size(93, 24);
			this->Btn_overlapping->Text = L"影像交疊";
			this->Btn_overlapping->Click += gcnew System::EventHandler(this, &MyForm::Btn_overlapping_Click);
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->toolStrip14);
			this->groupBox7->Controls->Add(this->toolStrip13);
			this->groupBox7->Controls->Add(this->toolStrip12);
			this->groupBox7->Controls->Add(this->toolStrip11);
			this->groupBox7->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->groupBox7->Location = System::Drawing::Point(975, 30);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(167, 156);
			this->groupBox7->TabIndex = 21;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"直方圖";
			// 
			// toolStrip11
			// 
			this->toolStrip11->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip11->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->Btn_Gray_Histogran });
			this->toolStrip11->Location = System::Drawing::Point(3, 30);
			this->toolStrip11->Name = L"toolStrip11";
			this->toolStrip11->Size = System::Drawing::Size(161, 27);
			this->toolStrip11->TabIndex = 0;
			this->toolStrip11->Text = L"toolStrip11";
			// 
			// Btn_Gray_Histogran
			// 
			this->Btn_Gray_Histogran->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_Gray_Histogran.Image")));
			this->Btn_Gray_Histogran->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->Btn_Gray_Histogran->Name = L"Btn_Gray_Histogran";
			this->Btn_Gray_Histogran->Size = System::Drawing::Size(108, 24);
			this->Btn_Gray_Histogran->Text = L"灰階直方圖";
			this->Btn_Gray_Histogran->Click += gcnew System::EventHandler(this, &MyForm::Btn_Gray_Histogran_Click);
			// 
			// toolStrip12
			// 
			this->toolStrip12->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip12->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripButton2 });
			this->toolStrip12->Location = System::Drawing::Point(3, 57);
			this->toolStrip12->Name = L"toolStrip12";
			this->toolStrip12->Size = System::Drawing::Size(161, 27);
			this->toolStrip12->TabIndex = 1;
			this->toolStrip12->Text = L"toolStrip12";
			// 
			// toolStrip13
			// 
			this->toolStrip13->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip13->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripButton3 });
			this->toolStrip13->Location = System::Drawing::Point(3, 84);
			this->toolStrip13->Name = L"toolStrip13";
			this->toolStrip13->Size = System::Drawing::Size(161, 27);
			this->toolStrip13->TabIndex = 2;
			this->toolStrip13->Text = L"toolStrip13";
			// 
			// toolStrip14
			// 
			this->toolStrip14->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip14->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripButton4 });
			this->toolStrip14->Location = System::Drawing::Point(3, 111);
			this->toolStrip14->Name = L"toolStrip14";
			this->toolStrip14->Size = System::Drawing::Size(161, 27);
			this->toolStrip14->TabIndex = 3;
			this->toolStrip14->Text = L"toolStrip14";
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton2.Image")));
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(108, 24);
			this->toolStripButton2->Text = L"三色直方圖";
			// 
			// toolStripButton3
			// 
			this->toolStripButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton3.Image")));
			this->toolStripButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton3->Name = L"toolStripButton3";
			this->toolStripButton3->Size = System::Drawing::Size(108, 24);
			this->toolStripButton3->Text = L"直方圖等化";
			// 
			// toolStripButton4
			// 
			this->toolStripButton4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton4.Image")));
			this->toolStripButton4->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton4->Name = L"toolStripButton4";
			this->toolStripButton4->Size = System::Drawing::Size(123, 24);
			this->toolStripButton4->Text = L"直方圖規定化";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1274, 935);
			this->Controls->Add(this->groupBox7);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->Pos_x);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Btn_Reset);
			this->Controls->Add(this->Pos_RGBvalue);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->Pos_y);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->Exit);
			this->Controls->Add(this->groupbox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->groupbox1->ResumeLayout(false);
			this->groupbox1->PerformLayout();
			this->toolStrip5->ResumeLayout(false);
			this->toolStrip5->PerformLayout();
			this->toolStrip3->ResumeLayout(false);
			this->toolStrip3->PerformLayout();
			this->toolStrip2->ResumeLayout(false);
			this->toolStrip2->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->toolStrip8->ResumeLayout(false);
			this->toolStrip8->PerformLayout();
			this->toolStrip7->ResumeLayout(false);
			this->toolStrip7->PerformLayout();
			this->toolStrip6->ResumeLayout(false);
			this->toolStrip6->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->toolStrip10->ResumeLayout(false);
			this->toolStrip10->PerformLayout();
			this->toolStrip9->ResumeLayout(false);
			this->toolStrip9->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->overlapping_trackbar))->EndInit();
			this->toolStrip4->ResumeLayout(false);
			this->toolStrip4->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->toolStrip11->ResumeLayout(false);
			this->toolStrip11->PerformLayout();
			this->toolStrip12->ResumeLayout(false);
			this->toolStrip12->PerformLayout();
			this->toolStrip13->ResumeLayout(false);
			this->toolStrip13->PerformLayout();
			this->toolStrip14->ResumeLayout(false);
			this->toolStrip14->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
public: void LoadPCXFile(String ^filename, PCXData % PCXdata)
{
	PCXdata.filepath = filename;
	String ^name = System::IO::Path::GetFileName(filename); //得到檔案名稱
	PCXdata.filename = name;
	FileStream ^fs = gcnew FileStream(filename, FileMode::Open); //資料流 //FileStream FileMode在System::IO底下 
	BinaryReader ^br = gcnew BinaryReader(fs); //二進位編碼
	while ((br->BaseStream->Position) < 128)
	{
		switch (br->BaseStream->Position)
		{
		case 0:
			PCXdata.Manufacture = br->ReadByte().ToString();
			break;
		case 1:
			PCXdata.version = br->ReadByte();
			break;
		case 2:
			PCXdata.Encoding = br->ReadByte();
			break;
		case 3:
			PCXdata.BitsPerPixel = br->ReadByte();
			break;
		case 4:
			//理解再寫
			{int Xmin = br->ReadByte();
			Xmin = Xmin + 256 * br->ReadByte();
			int Ymin = br->ReadByte();
			Ymin = Ymin + 256 * br->ReadByte();
			int Xmax = br->ReadByte();
			Xmax = Xmax + 256 * br->ReadByte();
			int Ymax = br->ReadByte();
			Ymax = Ymax + 256 * br->ReadByte();
			PCXdata.image = gcnew Bitmap(Xmax - Xmin + 1, Ymax - Ymin + 1);
			break; }
		case 12:
			PCXdata.Hdpi = br->ReadByte();
			break;
		case 14:
			PCXdata.Vdpi = br->ReadByte();
			break;
		case 64:
			PCXdata.reserved = br->ReadByte();
			break;
		case 65:
			PCXdata.Nplane = br->ReadByte().ToString();
			break;
		case 66:
			PCXdata.BytePerLine = br->ReadByte();
			PCXdata.BytePerLine = 256 * (br->ReadByte() + PCXdata.BitsPerPixel);
			break;
		case 68:
			if (br->ReadByte() == 1)
			{
				PCXdata.color = "Color or B&W";
			}
			else if (br->ReadByte() == 2)
			{
				PCXdata.color = "grayscale";
			}
			break;
		case 70:
			PCXdata.Hscreensize = br->ReadByte();
			break;
		case 72:
			PCXdata.Vscreensize = br->ReadByte();
			break;
		default:
			br->ReadByte();
			break;
		}
	}
		/**************************/
		PCXdata.Colormap = gcnew Bitmap(128, 128);
		br->BaseStream->Position = (fs->Length) - 769;

		int check = br->ReadByte();
		Graphics ^graphics = Graphics::FromImage(PCXdata.Colormap);
		Color palette; //調色盤
		short color[256][3] = { {0,0,0} };
		if (check != 12)
		{
			br->BaseStream->Position = 16;
			int red, green, blue;
			for (int i = 0, c = 0; i < 4; i++)
			{
				for (int j = 0; j < 4; j++, c++)
				{
					red = br->ReadByte();
					green = br->ReadByte();
					blue = br->ReadByte();
					palette = Color::FromArgb(red, green, blue);
					SolidBrush ^brush = gcnew SolidBrush(palette); //https://msdn.microsoft.com/zh-tw/library/aa983677(v=vs.71).aspx
					System::Drawing::Rectangle rect((i * 32), (j * 32), 32, 32); //https://msdn.microsoft.com/zh-tw/library/system.drawing.rectangle(v=vs.110).aspx
					graphics->FillRectangle(brush, rect);
					color[c][0] = red;
					color[c][1] = green;
					color[c][2] = blue;
				}
			}
		}
		else if(check == 12)
		{
			int red, green, blue;
			for (int i = 0, c = 0; i < 16; i++)
			{
				for (int j = 0; j < 16; j++, c++)
				{
					red = br->ReadByte();
					green = br->ReadByte();
					blue = br->ReadByte();
					palette = Color::FromArgb(red, green, blue);
					SolidBrush ^brush = gcnew SolidBrush(palette);
					System::Drawing::Rectangle rect((i * 8), (j * 8), 8, 8);
					graphics->FillRectangle(brush, rect);
					color[c][0] = red;
					color[c][1] = green;
					color[c][2] = blue;
				}
			}
		}
		br->BaseStream->Position = 127;
		int count = br->ReadByte();
			
		if (PCXdata.Encoding == 0) //下方else if 為 count?
		{
			int y = 0, x = 0;
			while (y < PCXdata.image->Height)
			{
				int pposition = br->BaseStream->Position;
				int ck_c = br->ReadByte();
				//bool over = false;
				Color newcolor = Color::FromArgb(color[ck_c][0], color[ck_c][1], color[ck_c][2]);
				PCXdata.image->SetPixel(x, y, newcolor); //https://msdn.microsoft.com/zh-tw/library/system.drawing.bitmap.setpixel(v=vs.110).aspx
				x++;
				if (x >= PCXdata.image->Width)
				{
					y++;
					x = 0;
				}
			}

		}
		else if (count == 0) //處理彩色
		{
			int x = 0, y = 0;
			while (y < PCXdata.image->Height)
			{
				int pposition = br->BaseStream->Position;
				int ck_c = br->ReadByte();
				//bool over = false;
				if (ck_c >= 192)
				{
					int length = ck_c - 192;
					int colorcode = br->ReadByte();
					Color newColor = Color::FromArgb(color[colorcode][0], color[colorcode][1], color[colorcode][2]);
					for (; length > 0; length--)
					{
						PCXdata.image->SetPixel(x, y, newColor);
						x++;
						if (x >= PCXdata.image->Width)
						{
							y++; 
							x = 0;
						}
						if (y >= PCXdata.image->Height)
						{
							break;
						}
					}
				}
				else
				{
					Color newColor = Color::FromArgb(color[ck_c][0], color[ck_c][1], color[ck_c][2]);
					PCXdata.image->SetPixel(x, y, newColor);
					x++;
					if (x >= PCXdata.image->Width)
					{
						y++;
						x = 0;
					}
				}


			}
		}
		fs->Close(); //關閉FileStream

}

public:void ConvertColor(Bitmap ^src, Bitmap ^%dst, int code)  //scr原圖 dst處理後的圖
{
	if (src != nullptr)
	{
		dst = gcnew Bitmap(src->Width, src->Height);
		switch (code)  //橫向掃整張圖 裕文為直向掃
		{
		case RGB2Gray:
			for (int i = 0; i < src->Width; i++)
			{
				for (int j = 0; j < src->Height; j++)
				{
					//灰階化公式:R*0.299 + G*0.587 + B*0.114+0.5
					int grayvalue = src->GetPixel(i, j).R*0.299 + src->GetPixel(i, j).G*0.587 + src->GetPixel(i, j).B*0.114 +0.5;
					dst->SetPixel(i, j, Color::FromArgb(grayvalue, grayvalue, grayvalue));

				}
			}
			break;
		case RGB2Gray_Inverse:
			for (int i = 0; i < src->Width; i++)
			{
				for (int j = 0; j < src->Height; j++)
				{
					//灰階化公式:R*0.299 + G*0.587 + B*0.114+0.5
					int grayvalue = src->GetPixel(i, j).R*0.299 + src->GetPixel(i, j).G*0.587 + src->GetPixel(i, j).B*0.114 + 0.5;
					int grayvalue_inverse = 255 - grayvalue;
					dst->SetPixel(i, j, Color::FromArgb(grayvalue_inverse, grayvalue_inverse, grayvalue_inverse));

				}
			}
			break;
		case ToRed:
			for (int i = 0; i < src->Width; i++)
			{
				for (int j = 0; j < src->Height; j++)
				{
					dst->SetPixel(i, j, Color::FromArgb(src->GetPixel(i, j).R, 0, 0));
				}
			}
			break;

		case ToGreen:
			for (int i = 0; i < src->Width; i++)
			{
				for (int j = 0; j < src->Height; j++)
				{
				dst->SetPixel(i, j, Color::FromArgb(0, src->GetPixel(i, j).G, 0));
				}
			}
			
			break;

		case ToBlue:
			for (int i = 0; i < src->Width; i++)
			{
				for (int j = 0; j < src->Height; j++)
				{
					dst->SetPixel(i, j, Color::FromArgb(0, 0, src->GetPixel(i, j).B));
				}
			}
			break;
		case RGB_Inverse:
			for (int i = 0; i < src->Width; i++)
			{
				for (int j = 0; j < src->Height; j++)
				{
					dst->SetPixel(i, j, Color::FromArgb(255-(src->GetPixel(i, j).R), 255-(src->GetPixel(i, j).G), 255-(src->GetPixel(i, j).B)));
				}
			}
		default:
			break;
		}
	}
	else
		MessageBox::Show("No image input");
}

public:void Threshold(Bitmap ^src, Bitmap ^%dst, int threshold,int code)
{
	for (int i = 0; i < src->Width; i++)  //size_t 是unsigned int 
	{
		for (int j = 0; j < src->Height; j++)
		{
			if (src->GetPixel(i, j).R != src->GetPixel(i, j).G || src->GetPixel(i, j).R != src->GetPixel(i, j).B)
			{
				MessageBox::Show("Convert to Gray First.");
				break;
			}
		}
	}
	for (int i = 0; i < src->Width; i++)
	{
		for (int j = 0; j < src->Height; j++)
		{
			if (src->GetPixel(i, j).R >= threshold)  //灰階化後RGB的value都一樣
			{
				if (code == Threshold_Binary)
					src->SetPixel(i, j, Color::FromArgb(255, 255, 255));  //白
				else if (code == Threshold_Binary_Inverse)
					src->SetPixel(i, j, Color::FromArgb(0, 0, 0));  //黑
			}
			else if (src->GetPixel(i, j).R < threshold)
			{
				if (code == Threshold_Binary)
					src->SetPixel(i, j, Color::FromArgb(0, 0, 0));  //黑
				else if (code == Threshold_Binary_Inverse)
					src->SetPixel(i, j, Color::FromArgb(255,255,255));  //白
			}
			
		}
	}
}

public:void Flip(Bitmap ^src, Bitmap ^%dst, int code)
{
	if (src != nullptr)
	{
		Bitmap ^temp = src;
		dst = gcnew Bitmap(src->Width, src->Height); 
		switch (code)
		{
			case Horizontal:
				for (int i = 0; i < temp->Width; i++)  
				{
					for (int j = 0; j < temp->Height; j++)
					{
						Color color = temp->GetPixel(i, j);
						dst->SetPixel(temp->Width - i - 1, j, color);  //X軸變動 Y軸不變 
					}
				}
				break;
			case Vertical:
				for (int i = 0; i < temp->Width; i++)
				{
					for (int j = 0; j < temp->Height; j++)
					{
						Color color = temp->GetPixel(i, j);
						dst->SetPixel(i, temp->Height - j - 1, color); //X軸不變，Y軸變
					}
				}
				break;
			case Diagonal:
				for (int i = 0; i < temp->Width; i++)
				{
					for (int j = 0; j < temp->Height; j++)
					{
						Color color = temp->GetPixel(i, j);
						dst->SetPixel(temp->Width - i - 1, temp->Height - j - 1, color);
					}
				}
				break;
			default:
				break;
		}
	}
	else
		MessageBox::Show("No image input");
}

public:void ZoomFunction(Bitmap ^src, Bitmap ^%dst, double ZoomRate, int code)  //放大縮小
{
	if (ZoomRate > 0 && src != nullptr)
	{
		dst = gcnew Bitmap((int)src->Width*ZoomRate + 0.5, (int)src->Height*ZoomRate + 0.5);
		switch (code)
		{
		case Duplication:
			for (unsigned int i = 0; i<dst->Width; i++)
				for (unsigned int j = 0; j < dst->Height; j++)
				{
					float index_x = (float)(i / ZoomRate);
					float index_y = (float)(j / ZoomRate);
					dst->SetPixel(i, j, src->GetPixel((int)index_x + 0.5, (int)index_y + 0.5));
				}
			break;
			/*
		case Other://若比例小於原圖用平均法，大於原圖則用差分法
			if (ZoomRate > 0 && ZoomRate < 1)//縮小
			{

				for (unsigned int i = 0; i<dst->Width; i++)
					for (unsigned int j = 0; j < dst->Height; j++)
					{
						int set_x = i * ZoomRate;
						int set_y = j*ZoomRate;
						float R_x = i * ZoomRate - set_x;
						float R_y = j * ZoomRate - set_y;
					}
			}
			break;*/
		default:
			break;
		}
	}
	else
	{
		MessageBox::Show("No Image yet or Rate cannot be smaller than zero!");
	}
}

//手寫繪圖
/* 手寫繪圖
private:System::Void d_Line(Bitmap ^%dst, Point P1, Point P2)  //P1=起點 P2=終點  接近水平線時會變虛線，須修正
{
	if (P1.X != P2.X) //為直斜線
	{
		float X = P2.X - P1.X;
		float Y = P2.Y - P1.Y;
		float temp = (Y / X) * 1000;
		float a = temp*0.001; //斜率
		float Z = temp*0.001;
		
		float b = 1.0*(P1.Y - a*P1.X);//截距 因為y = ax+b 所以b = y - ax
		if (a > 0)
		{
			if (P1.X > P2.X)  //右下往左上
			{
				for (int i = P2.X; i < P1.X; i++)
				{
					for (int j = i*a + b + 0.5; j < (int)((i + 1)*a + b + 0.5); j++)
					{
						dst->SetPixel(i, j, Color::FromArgb(255, 0, 0));
						if (P1.X == P2.X) break;
					}
					if (P1.X == P2.X) break;
				}
					
			}
			else if (P1.X < P2.X)  //左上往右下
			{
				for (int i = P1.X; i < P2.X; i++)
				{
					for (int j = i*a + b + 0.5; j < (int)((i + 1)*a + b + 0.5); j++)
					{
						dst->SetPixel(i, j, Color::FromArgb(255, 0, 0));
					}
				}
			}
		}
		if (a < 0)
		{
			if (P1.X > P2.X)  //右上往左下
			{
				for (int i = P2.X; i < P1.X; i++)
				{
					
					for (int j = i*a + b + 0.5; j >= (int)((i + 1)*a + b + 0.5); j--)
					{
						dst->SetPixel(i, j, Color::FromArgb(255, 0, 0));
						//if (P1.X == P2.X) 
							//Vertical_Line(P1, P2);
					}
				}
			}
			else if (P1.X < P2.X)  //左下往右上
			{
				for (int i = P1.X; i < P2.X; i++)
				{
					
					for (int j = i*a + b + 0.5; j > (int)((i + 1)*a + b + 0.5); j--)
					{
						int pixel = ((i + 1)*a + b + 0.5);
						dst->SetPixel(i, j, Color::FromArgb(255, 0, 0));
						//if (P1.X == P2.X) 
							//Vertical_Line(P1, P2);
					}
				}
			}
		}
	}

	if (P1.X == P2.X)  //垂直線
	{
		if (P1.Y < P2.Y)  //P2在下面，表示滑鼠向下移動
		{
		for (int j = P1.Y; j < P2.Y; j++)
			dst->SetPixel(P1.X, j, Color::FromArgb(255, 0, 0));//畫紅線
		}
	else if (P1.Y > P2.Y)  //P2在上面，表示滑鼠向上移動
		{
		for (int j = P2.Y; j < P1.Y; j++)
			dst->SetPixel(P1.X, j, Color::FromArgb(255, 0, 0));
		}
	}
	if (P1.Y == P2.Y)  //水平線
	{
		if (P1.X > P2.X) //P2在左邊，表示滑鼠向左移動
		{
			for (int i = P2.X; i <= P1.X; i++)
				dst->SetPixel(i, P1.Y, Color::FromArgb(255, 0, 0));
		}
		else if (P1.X < P2.X) //P2在右邊，表示滑鼠向右移動
		{
			for (int i = P1.X; i <= P2.X; i++)
				dst->SetPixel(i, P1.Y, Color::FromArgb(255, 0, 0));
		}
	}
}



private:System::Void d_Rect(Bitmap ^%dst, Point P1, Point P2)  //P1:起點  P2:終點
{
	int x_max = Math::Max(P1.X, P2.X);
	int x_min = Math::Min(P1.X, P2.X);
	int y_max = Math::Max(P1.Y, P2.Y);
	int y_min = Math::Min(P1.Y, P2.Y);

	for (size_t i = x_min; i <= x_max; i++)  // 長方形的上下邊
	{
		dst->SetPixel(i, P1.Y, Color::FromArgb(255, 0, 0));
		dst->SetPixel(i, P2.Y, Color::FromArgb(255, 0, 0));
	}
	for (size_t j = y_min; j <= y_max; j++)
	{
		dst->SetPixel(P1.X, j, Color::FromArgb(255, 0, 0));
		dst->SetPixel(P2.X, j, Color::FromArgb(255, 0, 0));
	}

}
*/  

public:void OverlappingFunction(int transparency) //transparency = 透明度
{
	short width,height;
	Color c;
	if (img_source == nullptr || img_source2 == nullptr)
	{
		MessageBox::Show("No image input");
	}
	else
	{
		//比較兩張圖大小 以大的那張長寬當基礎
		(img_source->Height) >= (img_source2->Height) ? (height = img_source->Height) : (height = img_source2->Height);
		(img_source->Width) >= (img_source2->Width) ? (width = img_source->Width) : (width = img_source2->Width);


		Bitmap^ img_processed = gcnew Bitmap(width, height);

		for (int x = 0; x < width; x++)
		{
			for (int y = 0; y < height; y++)
			{
				if ((x < img_source->Width) && (x < img_source2->Width) && (y < img_source->Height) && (y < img_source2->Height))
				{
					short R = (img_source2->GetPixel(x, y).R * transparency + img_source->GetPixel(x, y).R * (100 - transparency)) / 100;
					short G = (img_source2->GetPixel(x, y).G * transparency + img_source->GetPixel(x, y).G * (100 - transparency)) / 100;
					short B = (img_source2->GetPixel(x, y).B * transparency + img_source->GetPixel(x, y).B * (100 - transparency)) / 100;
					c = Color::FromArgb(R, G, B);
				}
				else if ((x > img_source->Width) || (y > img_source->Height))
				{
					if ((x < img_source2->Width) && (y < img_source2->Height)) //第二張圖比第一張小
					{
						short R = (img_source2->GetPixel(x, y).R * transparency + Color::AliceBlue.R * (100 - transparency)) / 100;
						short G = (img_source2->GetPixel(x, y).G * transparency + Color::AliceBlue.G * (100 - transparency)) / 100;
						short B = (img_source2->GetPixel(x, y).B * transparency + Color::AliceBlue.B * (100 - transparency)) / 100;
						c = Color::FromArgb(R, G, B);
					}

				}
				else if ((x > img_source2->Width) || (y > img_source2->Height))
				{
					if ((x < img_source->Width) && (y < img_source->Height))  //第一張圖比第二張小
					{
						short R = (Color::AliceBlue.R * transparency + img_source->GetPixel(x, y).R * (100 - transparency)) / 100;
						short G = (Color::AliceBlue.G * transparency + img_source->GetPixel(x, y).G * (100 - transparency)) / 100;
						short B = (Color::AliceBlue.B * transparency + img_source->GetPixel(x, y).B * (100 - transparency)) / 100;
						c = Color::FromArgb(R, G, B);
					}
				}
				img_processed->SetPixel(x, y, c);
			}
		}
		pictureBox2->Image = img_processed;
	}
}
//******************************Form Design*********************
private: System::Void openfileToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	OpenFileDialog ^openfiledialog1 = gcnew OpenFileDialog;
	openfiledialog1->Multiselect = true;

	if (openfiledialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		if (openfiledialog1->FileName->IndexOf("jpge") > 0 || openfiledialog1->FileName->IndexOf("jpg") > 0)
		{
			img_source = gcnew Bitmap(openfiledialog1->FileName);
			pictureBox1->Image = img_source;
			pictureBox2->Image = img_source;
		}
		else if (openfiledialog1->FileName->IndexOf("pcx") > 0)
		{
			PCXData data;
			LoadPCXFile(openfiledialog1->FileName, data);
			img_source = data.image;
			pictureBox1->Image = img_source;
			pictureBox2->Image = img_source;
		}
	}
	delete openfiledialog1;
}
private: System::Void openfile2ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	OpenFileDialog ^openfiledialog2 = gcnew OpenFileDialog;
	openfiledialog2->Multiselect = true;

	if (openfiledialog2->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		if (openfiledialog2->FileName->IndexOf("jpeg") > 0 || openfiledialog2->FileName->IndexOf("jpg") > 0)
		{
			img_source2 = gcnew Bitmap(openfiledialog2->FileName); \
			pictureBox3->Image = img_source2;
			pictureBox2->Image = img_source2;
		}
		else if (openfiledialog2->FileName->IndexOf("pcx") > 0)
		{
			PCXData data2;
			LoadPCXFile(openfiledialog2->FileName, data2);
			img_source2 = data2.image;
			pictureBox3->Image = img_source2;
			pictureBox2->Image = img_source2;
		}
	}
}
private: System::Void Btn_Reset_Click(System::Object^  sender, System::EventArgs^  e) {
	pictureBox2->Image = img_source;
}
private: System::Void Exit_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}
private: System::Void Btn_Gray_Click(System::Object^  sender, System::EventArgs^  e) {
	Bitmap ^img_processed;
	ConvertColor(img_source, img_processed, RGB2Gray);
	pictureBox2->Image = img_processed;

}
private: System::Void Btn_Gray_Inverse_Click(System::Object^  sender, System::EventArgs^  e) {
	Bitmap ^img_processed;
	ConvertColor(img_source, img_processed, RGB2Gray_Inverse);
	pictureBox2->Image = img_processed;
}
private: System::Void Btn_ToRed_Click(System::Object^  sender, System::EventArgs^  e) {
	Bitmap ^img_processed;
	ConvertColor(img_source, img_processed, ToRed);
	pictureBox2->Image = img_processed;
}
private: System::Void Btn_ToGreen_Click(System::Object^  sender, System::EventArgs^  e) {
	Bitmap ^img_processed;
	ConvertColor(img_source, img_processed, ToGreen);
	pictureBox2->Image = img_processed;
}
private: System::Void Btn_ToBlue_Click(System::Object^  sender, System::EventArgs^  e) {
	Bitmap ^img_processed;
	ConvertColor(img_source, img_processed, ToBlue);
	pictureBox2->Image = img_processed;
}
private: System::Void Btn_RGB_Inverse_Click(System::Object^  sender, System::EventArgs^  e) {
	Bitmap ^img_processed;
	ConvertColor(img_source, img_processed, RGB_Inverse);
	pictureBox2->Image = img_processed;
}
private: System::Void Btn_Threshold_Click(System::Object^  sender, System::EventArgs^  e) {
	Bitmap ^img_processed;
	ConvertColor(img_source, img_processed, RGB2Gray);
	Threshold(img_processed,img_processed,100,Threshold_Binary);
	pictureBox2->Image = img_processed;
}
private: System::Void Btn_Threshold_Inverse_Click_1(System::Object^  sender, System::EventArgs^  e) {
	Bitmap ^img_processed;
	ConvertColor(img_source, img_processed, RGB2Gray);
	Threshold(img_processed, img_processed, 100, Threshold_Binary_Inverse);
	pictureBox2->Image = img_processed;
}
private: System::Void Btn_Bouncing_Ball_Click(System::Object^  sender, System::EventArgs^  e) {
	Bouncingball ^bouncing_ball = gcnew Bouncingball;
	bouncing_ball->ShowDialog();
}
private: System::Void Btn_Horizontal_Flip_Click(System::Object^  sender, System::EventArgs^  e) {
	Bitmap ^img_processed;
	Flip(img_source, img_processed, Horizontal);
	pictureBox2->Image = img_processed;
}
private: System::Void Btn_Vertical_Flip_Click(System::Object^  sender, System::EventArgs^  e) {
	Bitmap ^img_processed;
	Flip(img_source, img_processed, Vertical);
	pictureBox2->Image = img_processed;
}
private: System::Void Btn_Diagonal_Flip_Click(System::Object^  sender, System::EventArgs^  e) {
	Bitmap ^img_processed;
	Flip(img_source, img_processed, Diagonal);
	pictureBox2->Image = img_processed;
}
private: System::Void Btn_Zoom_Click(System::Object^  sender, System::EventArgs^  e) {
	Bitmap ^imgprocessed;
	double ZoomRate = System::Convert::ToDouble(Textbox_ZoomRate->Text);
	ZoomFunction(img_source, imgprocessed, ZoomRate, Duplication);
	pictureBox2->Image = imgprocessed;
}
private: System::Void pictureBox1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (img_source != nullptr)
	{
		Pos_x->Text = e->X.ToString();
		Pos_y->Text = e->Y.ToString();
		System::String ^str;
		Color c = img_source->GetPixel(e->X, e->Y);
		str = "RGB:(" + c.R.ToString()+ " , " + c.G.ToString()+ " , " + c.B.ToString()+ ")";
		Pos_RGBvalue->Text = str;
	}
}
private: System::Void pictureBox2_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

	LBtnDown = e->Location;
}
private: System::Void pictureBox2_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (e->Button == System::Windows::Forms::MouseButtons::Left)
	{
		System::Drawing::Imaging::PixelFormat format = img_source->PixelFormat;
		System::Drawing::Graphics^ Reference_rec;
		Rectangle cloneRect = Rectangle(0, 0, img_source->Width, img_source->Height);
		Bitmap ^temp = img_source->Clone(cloneRect, format);
		Pen^ ReferencePen = gcnew Pen(Color::Red, 2.0F);
		Point LBtnMove = e->Location;
		int X_size = LBtnMove.X - LBtnDown.X; //X座標相減
		int Y_size = LBtnMove.Y - LBtnDown.Y; //Y座標相減
		switch (d_Pen)
		{
			/*case Pen_None:
				pictureBox2->Image = img_source;
				break;*/
			case Pen_Line:
				//d_Line(temp, LBtnDown, LBtnUp);
				pictureBox2->Image = img_source;
				pictureBox2->Refresh();
				Reference_rec = pictureBox2->CreateGraphics();
				Reference_rec->DrawLine(ReferencePen, LBtnDown.X, LBtnDown.Y, LBtnMove.X, LBtnMove.Y);
				break;
			case Pen_Circle:  //圓形的X或Y Size為負值依然可以繪圖
				//d_Circle(temp, LBtnDown, LBtnUp);
				pictureBox2->Image = img_source;
				pictureBox2->Refresh();
				Reference_rec = pictureBox2->CreateGraphics();
				if (X_size > 0)  //由左向右畫圓
				{
					if(Y_size > 0) //左上向右下畫圓  X_size +  Y_size +
						Reference_rec->DrawEllipse(ReferencePen, LBtnDown.X, LBtnDown.Y, X_size, Y_size);
					if(Y_size < 0) //左下向右上畫圓  X_size +  Y_size -
						Reference_rec->DrawEllipse(ReferencePen, LBtnDown.X, LBtnDown.Y, X_size, Y_size);
				}
					
				if (X_size < 0) //右向左畫圓
				{
					if(Y_size > 0) //右上向左下畫圓  X_size -  Y_size +
						Reference_rec->DrawEllipse(ReferencePen, LBtnDown.X, LBtnDown.Y, X_size, Y_size);
					if (Y_size < 0) //右下向左上畫圓 X_size -  Y_size +
						Reference_rec->DrawEllipse(ReferencePen, LBtnDown.X, LBtnDown.Y, X_size, Y_size);
				}
				break;
			case Pen_Rect:  //***注意:矩形的Size如為負值則無法繪圖 因此均須取絕對值***
				//d_Rect(temp, LBtnDown, LBtnMove);
				pictureBox2->Image = img_source;
				pictureBox2->Refresh();
				Reference_rec = pictureBox2->CreateGraphics();
				if (X_size > 0)  //由左向右畫矩形
				{
					if (Y_size > 0) //左上向右下矩形  X_size +  Y_size +
						Reference_rec->DrawRectangle(ReferencePen, LBtnDown.X, LBtnDown.Y, X_size, Y_size);
					if (Y_size < 0) //左下向右上矩形  X_size +  Y_size -
						Reference_rec->DrawRectangle(ReferencePen, LBtnDown.X, LBtnMove.Y, X_size, Math::Abs(Y_size));
				}

				if (X_size < 0) //右向左矩形
				{
					if (Y_size > 0) //右上向左下矩形  X_size -  Y_size +
						Reference_rec->DrawRectangle(ReferencePen, LBtnMove.X, LBtnDown.Y, Math::Abs(X_size), Y_size);
					if (Y_size < 0) //右下向左上矩形 X_size -  Y_size +
						Reference_rec->DrawRectangle(ReferencePen, LBtnMove.X, LBtnMove.Y, Math::Abs(X_size), Math::Abs(Y_size));
				}
				break;
			default:
				break;
		}
	}
}
private: System::Void Btn_Line_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	d_Pen = Pen_Line;
}
private: System::Void Btn_Circle_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	d_Pen = Pen_Circle;
}
private: System::Void Btn_Rectangle_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	d_Pen = Pen_Rect;
}
private: System::Void Btn_None_Draw_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	//d_Pen = Pen_None;
	pictureBox2->Image = img_source;
}
private: System::Void Btn_overlapping_Click(System::Object^  sender, System::EventArgs^  e) {
	overlapping_trackbar->Visible = true;
}
private: System::Void overlapping_trackbar_Scroll(System::Object^  sender, System::EventArgs^  e) {
	int transparency = overlapping_trackbar->Value; //transparency = 透明度
	label4->Text = transparency.ToString()+"%";
	OverlappingFunction(transparency);
}
private: System::Void Btn_Gray_Histogran_Click(System::Object^  sender, System::EventArgs^  e) {
	//GrayHistogram ^gray_histogram = gcnew GrayHistogram;

}
};
}
