#pragma once
#include < stdio.h >  
#include < stdlib.h >  
#include<iostream>
#include<cmath>
#include"vcclr.h"
#include<time.h>
#include"Bouncingball.h"
#include"GrayHistogram.h"
#include"RGBHistogram.h"
#include"EqualizationHistogram.h"
#include"OtsuHistogram.h"
#include"SpecificationHistogram.h"

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
		Zoom,  //任意縮放
		Duplication,  //複製放大
		Interpolation,//插值放大
		Decimation, //刪去縮小
		Average, //平均縮小
		Other
	};


	enum Pen_Select
	{
		Pen_None,
		Pen_Line,
		Pen_Circle,
		Pen_Rect
	};

	enum Gray_His {
		gray_histogram,
		specification_histogram_origin,
		specification_histogram_object
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
	private: System::Windows::Forms::ToolStripButton^  Btn_Threshold_Binary;


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
		SpecificationHistogram ^Specification_His = gcnew SpecificationHistogram;

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
private: System::Windows::Forms::ToolStripButton^  Btn_Threshold_Binary_Inverse;

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
private: System::Windows::Forms::ToolStripButton^  Btn_Overlapping;

private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::GroupBox^  groupBox7;
private: System::Windows::Forms::ToolStrip^  toolStrip14;
private: System::Windows::Forms::ToolStripButton^  Specification_Histogram;

private: System::Windows::Forms::ToolStrip^  toolStrip13;
private: System::Windows::Forms::ToolStripButton^  Equalization_Histogram;

private: System::Windows::Forms::ToolStrip^  toolStrip12;
private: System::Windows::Forms::ToolStripButton^  Btn_RGB_Histogram;

private: System::Windows::Forms::ToolStrip^  toolStrip11;
private: System::Windows::Forms::ToolStripButton^  Btn_Gray_Histogran;
private: System::Windows::Forms::GroupBox^  groupBox8;
private: System::Windows::Forms::NumericUpDown^  Threshold_value;


private: System::Windows::Forms::ToolStrip^  toolStrip15;
private: System::Windows::Forms::ToolStripButton^  Btn_Otsu;
private: System::Windows::Forms::ToolStrip^  toolStrip16;
private: System::Windows::Forms::ToolStripButton^  Btn_Otsu_Histogram;


private: System::Windows::Forms::ToolStrip^  toolStrip19;
private: System::Windows::Forms::ToolStripButton^  toolStripButton2;


private: System::Windows::Forms::ToolStrip^  toolStrip18;
private: System::Windows::Forms::ToolStripButton^  toolStripButton1;
private: System::Windows::Forms::ToolStripButton^  Btn_Decimation_Reduce;
private: System::Windows::Forms::ToolStripButton^  Btn_Average_Reduce;
private: System::Windows::Forms::ToolStripButton^  Btn_Duplication_Enlarge;
private: System::Windows::Forms::ToolStripButton^  Btn_Interpolation_Enlarge;
private: System::Windows::Forms::ToolStrip^  toolStrip17;
private: System::Windows::Forms::ToolStripButton^  Btn_Subtracting;
private: System::Windows::Forms::ToolStrip^  toolStrip20;
private: System::Windows::Forms::NumericUpDown^  Forward_rotation;

private: System::Windows::Forms::ToolStripButton^  toolStripButton3;
private: System::Windows::Forms::NumericUpDown^  Inverse_rotation;

private: System::Windows::Forms::ToolStrip^  toolStrip21;
private: System::Windows::Forms::ToolStripButton^  toolStripButton4;











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
			this->Btn_Threshold_Binary = (gcnew System::Windows::Forms::ToolStripButton());
			this->Btn_Threshold_Binary_Inverse = (gcnew System::Windows::Forms::ToolStripButton());
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
			this->toolStrip19 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->Btn_Decimation_Reduce = (gcnew System::Windows::Forms::ToolStripButton());
			this->Btn_Average_Reduce = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStrip18 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->Btn_Duplication_Enlarge = (gcnew System::Windows::Forms::ToolStripButton());
			this->Btn_Interpolation_Enlarge = (gcnew System::Windows::Forms::ToolStripButton());
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
			this->Inverse_rotation = (gcnew System::Windows::Forms::NumericUpDown());
			this->toolStrip21 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton4 = (gcnew System::Windows::Forms::ToolStripButton());
			this->Forward_rotation = (gcnew System::Windows::Forms::NumericUpDown());
			this->toolStrip20 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton3 = (gcnew System::Windows::Forms::ToolStripButton());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->toolStrip17 = (gcnew System::Windows::Forms::ToolStrip());
			this->Btn_Subtracting = (gcnew System::Windows::Forms::ToolStripButton());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->overlapping_trackbar = (gcnew System::Windows::Forms::TrackBar());
			this->toolStrip4 = (gcnew System::Windows::Forms::ToolStrip());
			this->Btn_Overlapping = (gcnew System::Windows::Forms::ToolStripButton());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->toolStrip16 = (gcnew System::Windows::Forms::ToolStrip());
			this->Btn_Otsu_Histogram = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStrip14 = (gcnew System::Windows::Forms::ToolStrip());
			this->Specification_Histogram = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStrip13 = (gcnew System::Windows::Forms::ToolStrip());
			this->Equalization_Histogram = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStrip12 = (gcnew System::Windows::Forms::ToolStrip());
			this->Btn_RGB_Histogram = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStrip11 = (gcnew System::Windows::Forms::ToolStrip());
			this->Btn_Gray_Histogran = (gcnew System::Windows::Forms::ToolStripButton());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->toolStrip15 = (gcnew System::Windows::Forms::ToolStrip());
			this->Btn_Otsu = (gcnew System::Windows::Forms::ToolStripButton());
			this->Threshold_value = (gcnew System::Windows::Forms::NumericUpDown());
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
			this->toolStrip19->SuspendLayout();
			this->toolStrip18->SuspendLayout();
			this->toolStrip10->SuspendLayout();
			this->toolStrip9->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Inverse_rotation))->BeginInit();
			this->toolStrip21->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Forward_rotation))->BeginInit();
			this->toolStrip20->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->groupBox6->SuspendLayout();
			this->toolStrip17->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->overlapping_trackbar))->BeginInit();
			this->toolStrip4->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->toolStrip16->SuspendLayout();
			this->toolStrip14->SuspendLayout();
			this->toolStrip13->SuspendLayout();
			this->toolStrip12->SuspendLayout();
			this->toolStrip11->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->toolStrip15->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Threshold_value))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fileToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(1124, 24);
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
			this->fileToolStripMenuItem->Size = System::Drawing::Size(38, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// openfileToolStripMenuItem
			// 
			this->openfileToolStripMenuItem->Name = L"openfileToolStripMenuItem";
			this->openfileToolStripMenuItem->Size = System::Drawing::Size(130, 22);
			this->openfileToolStripMenuItem->Text = L"Openfile";
			this->openfileToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openfileToolStripMenuItem_Click);
			// 
			// openfile2ToolStripMenuItem
			// 
			this->openfile2ToolStripMenuItem->Name = L"openfile2ToolStripMenuItem";
			this->openfile2ToolStripMenuItem->Size = System::Drawing::Size(130, 22);
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
			this->groupbox1->Location = System::Drawing::Point(0, 24);
			this->groupbox1->Margin = System::Windows::Forms::Padding(2);
			this->groupbox1->Name = L"groupbox1";
			this->groupbox1->Padding = System::Windows::Forms::Padding(2);
			this->groupbox1->Size = System::Drawing::Size(103, 149);
			this->groupbox1->TabIndex = 1;
			this->groupbox1->TabStop = false;
			this->groupbox1->Text = L"色彩轉換";
			// 
			// toolStrip5
			// 
			this->toolStrip5->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip5->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->Btn_Bouncing_Ball });
			this->toolStrip5->Location = System::Drawing::Point(2, 105);
			this->toolStrip5->Name = L"toolStrip5";
			this->toolStrip5->Size = System::Drawing::Size(99, 27);
			this->toolStrip5->TabIndex = 4;
			this->toolStrip5->Text = L"toolStrip5";
			// 
			// Btn_Bouncing_Ball
			// 
			this->Btn_Bouncing_Ball->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_Bouncing_Ball.Image")));
			this->Btn_Bouncing_Ball->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->Btn_Bouncing_Ball->Name = L"Btn_Bouncing_Ball";
			this->Btn_Bouncing_Ball->Size = System::Drawing::Size(67, 24);
			this->Btn_Bouncing_Ball->Text = L"彈力球";
			this->Btn_Bouncing_Ball->Click += gcnew System::EventHandler(this, &MyForm::Btn_Bouncing_Ball_Click);
			// 
			// toolStrip3
			// 
			this->toolStrip3->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip3->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->Btn_Threshold_Binary,
					this->Btn_Threshold_Binary_Inverse
			});
			this->toolStrip3->Location = System::Drawing::Point(2, 78);
			this->toolStrip3->Name = L"toolStrip3";
			this->toolStrip3->Size = System::Drawing::Size(99, 27);
			this->toolStrip3->TabIndex = 2;
			this->toolStrip3->Text = L"toolStrip3";
			// 
			// Btn_Threshold_Binary
			// 
			this->Btn_Threshold_Binary->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_Threshold_Binary.Image")));
			this->Btn_Threshold_Binary->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->Btn_Threshold_Binary->Name = L"Btn_Threshold_Binary";
			this->Btn_Threshold_Binary->Size = System::Drawing::Size(67, 24);
			this->Btn_Threshold_Binary->Text = L"二值化";
			this->Btn_Threshold_Binary->Click += gcnew System::EventHandler(this, &MyForm::Btn_Threshold_Binary_Click);
			// 
			// Btn_Threshold_Binary_Inverse
			// 
			this->Btn_Threshold_Binary_Inverse->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_Threshold_Binary_Inverse.Image")));
			this->Btn_Threshold_Binary_Inverse->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->Btn_Threshold_Binary_Inverse->Name = L"Btn_Threshold_Binary_Inverse";
			this->Btn_Threshold_Binary_Inverse->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Btn_Threshold_Binary_Inverse->Size = System::Drawing::Size(79, 24);
			this->Btn_Threshold_Binary_Inverse->Text = L"逆二值化";
			this->Btn_Threshold_Binary_Inverse->Click += gcnew System::EventHandler(this, &MyForm::Btn_Threshold_Binary_Inverse_Click_1);
			// 
			// toolStrip2
			// 
			this->toolStrip2->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->Btn_ToRed, this->Btn_ToGreen,
					this->Btn_ToBlue, this->Btn_RGB_Inverse
			});
			this->toolStrip2->Location = System::Drawing::Point(2, 51);
			this->toolStrip2->Name = L"toolStrip2";
			this->toolStrip2->Size = System::Drawing::Size(99, 27);
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
			this->Btn_ToGreen->Size = System::Drawing::Size(23, 24);
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
			this->Btn_RGB_Inverse->Size = System::Drawing::Size(67, 24);
			this->Btn_RGB_Inverse->Text = L"逆RGB";
			this->Btn_RGB_Inverse->Click += gcnew System::EventHandler(this, &MyForm::Btn_RGB_Inverse_Click);
			// 
			// toolStrip1
			// 
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->Btn_Gray, this->Btn_Gray_Inverse });
			this->toolStrip1->Location = System::Drawing::Point(2, 24);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(99, 27);
			this->toolStrip1->TabIndex = 0;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// Btn_Gray
			// 
			this->Btn_Gray->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_Gray.Image")));
			this->Btn_Gray->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->Btn_Gray->Name = L"Btn_Gray";
			this->Btn_Gray->Size = System::Drawing::Size(55, 24);
			this->Btn_Gray->Text = L"灰階";
			this->Btn_Gray->ToolTipText = L"灰階";
			this->Btn_Gray->Click += gcnew System::EventHandler(this, &MyForm::Btn_Gray_Click);
			// 
			// Btn_Gray_Inverse
			// 
			this->Btn_Gray_Inverse->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_Gray_Inverse.Image")));
			this->Btn_Gray_Inverse->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->Btn_Gray_Inverse->Name = L"Btn_Gray_Inverse";
			this->Btn_Gray_Inverse->Size = System::Drawing::Size(67, 24);
			this->Btn_Gray_Inverse->Text = L"逆灰階";
			this->Btn_Gray_Inverse->ToolTipText = L"toolStripButton1";
			this->Btn_Gray_Inverse->Click += gcnew System::EventHandler(this, &MyForm::Btn_Gray_Inverse_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(-4, -6);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(700, 600);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseMove);
			// 
			// Exit
			// 
			this->Exit->Location = System::Drawing::Point(122, 2);
			this->Exit->Margin = System::Windows::Forms::Padding(2);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(56, 18);
			this->Exit->TabIndex = 3;
			this->Exit->Text = L"Exit";
			this->Exit->UseVisualStyleBackColor = true;
			this->Exit->Click += gcnew System::EventHandler(this, &MyForm::Exit_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(753, 194);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(2);
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
			this->groupBox2->Location = System::Drawing::Point(115, 26);
			this->groupBox2->Margin = System::Windows::Forms::Padding(2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(2);
			this->groupBox2->Size = System::Drawing::Size(123, 130);
			this->groupBox2->TabIndex = 5;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"鏡射";
			// 
			// toolStrip8
			// 
			this->toolStrip8->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip8->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->Btn_Diagonal_Flip });
			this->toolStrip8->Location = System::Drawing::Point(2, 78);
			this->toolStrip8->Name = L"toolStrip8";
			this->toolStrip8->Size = System::Drawing::Size(119, 27);
			this->toolStrip8->TabIndex = 2;
			this->toolStrip8->Text = L"toolStrip8";
			// 
			// Btn_Diagonal_Flip
			// 
			this->Btn_Diagonal_Flip->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_Diagonal_Flip.Image")));
			this->Btn_Diagonal_Flip->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->Btn_Diagonal_Flip->Name = L"Btn_Diagonal_Flip";
			this->Btn_Diagonal_Flip->Size = System::Drawing::Size(79, 24);
			this->Btn_Diagonal_Flip->Text = L"對角鏡射";
			this->Btn_Diagonal_Flip->Click += gcnew System::EventHandler(this, &MyForm::Btn_Diagonal_Flip_Click);
			// 
			// toolStrip7
			// 
			this->toolStrip7->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip7->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->Btn_Vertical_Flip });
			this->toolStrip7->Location = System::Drawing::Point(2, 51);
			this->toolStrip7->Name = L"toolStrip7";
			this->toolStrip7->Size = System::Drawing::Size(119, 27);
			this->toolStrip7->TabIndex = 1;
			this->toolStrip7->Text = L"toolStrip7";
			// 
			// Btn_Vertical_Flip
			// 
			this->Btn_Vertical_Flip->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_Vertical_Flip.Image")));
			this->Btn_Vertical_Flip->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->Btn_Vertical_Flip->Name = L"Btn_Vertical_Flip";
			this->Btn_Vertical_Flip->Size = System::Drawing::Size(79, 24);
			this->Btn_Vertical_Flip->Text = L"垂直鏡射";
			this->Btn_Vertical_Flip->Click += gcnew System::EventHandler(this, &MyForm::Btn_Vertical_Flip_Click);
			// 
			// toolStrip6
			// 
			this->toolStrip6->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip6->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->Btn_Horizontal_Flip });
			this->toolStrip6->Location = System::Drawing::Point(2, 24);
			this->toolStrip6->Name = L"toolStrip6";
			this->toolStrip6->Size = System::Drawing::Size(119, 27);
			this->toolStrip6->TabIndex = 0;
			this->toolStrip6->Text = L"toolStrip6";
			// 
			// Btn_Horizontal_Flip
			// 
			this->Btn_Horizontal_Flip->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_Horizontal_Flip.Image")));
			this->Btn_Horizontal_Flip->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->Btn_Horizontal_Flip->Name = L"Btn_Horizontal_Flip";
			this->Btn_Horizontal_Flip->Size = System::Drawing::Size(79, 24);
			this->Btn_Horizontal_Flip->Text = L"水平鏡射";
			this->Btn_Horizontal_Flip->Click += gcnew System::EventHandler(this, &MyForm::Btn_Horizontal_Flip_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->toolStrip19);
			this->groupBox3->Controls->Add(this->toolStrip18);
			this->groupBox3->Controls->Add(this->label2);
			this->groupBox3->Controls->Add(this->toolStrip10);
			this->groupBox3->Controls->Add(this->toolStrip9);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->groupBox3->Location = System::Drawing::Point(242, 30);
			this->groupBox3->Margin = System::Windows::Forms::Padding(2);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(2);
			this->groupBox3->Size = System::Drawing::Size(113, 120);
			this->groupBox3->TabIndex = 6;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"縮放";
			// 
			// toolStrip19
			// 
			this->toolStrip19->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip19->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripButton2,
					this->Btn_Decimation_Reduce, this->Btn_Average_Reduce
			});
			this->toolStrip19->Location = System::Drawing::Point(2, 103);
			this->toolStrip19->Name = L"toolStrip19";
			this->toolStrip19->Size = System::Drawing::Size(109, 27);
			this->toolStrip19->TabIndex = 4;
			this->toolStrip19->Text = L"toolStrip19";
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton2.Image")));
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(55, 24);
			this->toolStripButton2->Text = L"縮小";
			// 
			// Btn_Decimation_Reduce
			// 
			this->Btn_Decimation_Reduce->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_Decimation_Reduce.Image")));
			this->Btn_Decimation_Reduce->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->Btn_Decimation_Reduce->Name = L"Btn_Decimation_Reduce";
			this->Btn_Decimation_Reduce->Size = System::Drawing::Size(79, 24);
			this->Btn_Decimation_Reduce->Text = L"刪去縮小";
			this->Btn_Decimation_Reduce->Click += gcnew System::EventHandler(this, &MyForm::Btn_Decimation_Reduce_Click);
			// 
			// Btn_Average_Reduce
			// 
			this->Btn_Average_Reduce->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_Average_Reduce.Image")));
			this->Btn_Average_Reduce->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->Btn_Average_Reduce->Name = L"Btn_Average_Reduce";
			this->Btn_Average_Reduce->Size = System::Drawing::Size(79, 24);
			this->Btn_Average_Reduce->Text = L"平均縮小";
			this->Btn_Average_Reduce->Click += gcnew System::EventHandler(this, &MyForm::Btn_Average_Reduce_Click);
			// 
			// toolStrip18
			// 
			this->toolStrip18->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip18->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripButton1,
					this->Btn_Duplication_Enlarge, this->Btn_Interpolation_Enlarge
			});
			this->toolStrip18->Location = System::Drawing::Point(2, 76);
			this->toolStrip18->Name = L"toolStrip18";
			this->toolStrip18->Size = System::Drawing::Size(109, 27);
			this->toolStrip18->TabIndex = 3;
			this->toolStrip18->Text = L"toolStrip18";
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(55, 24);
			this->toolStripButton1->Text = L"放大";
			// 
			// Btn_Duplication_Enlarge
			// 
			this->Btn_Duplication_Enlarge->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_Duplication_Enlarge.Image")));
			this->Btn_Duplication_Enlarge->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->Btn_Duplication_Enlarge->Name = L"Btn_Duplication_Enlarge";
			this->Btn_Duplication_Enlarge->Size = System::Drawing::Size(79, 24);
			this->Btn_Duplication_Enlarge->Text = L"複製放大";
			this->Btn_Duplication_Enlarge->Click += gcnew System::EventHandler(this, &MyForm::Btn_Duplication_Enlarge_Click);
			// 
			// Btn_Interpolation_Enlarge
			// 
			this->Btn_Interpolation_Enlarge->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_Interpolation_Enlarge.Image")));
			this->Btn_Interpolation_Enlarge->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->Btn_Interpolation_Enlarge->Name = L"Btn_Interpolation_Enlarge";
			this->Btn_Interpolation_Enlarge->Size = System::Drawing::Size(79, 24);
			this->Btn_Interpolation_Enlarge->Text = L"內插放大";
			this->Btn_Interpolation_Enlarge->Click += gcnew System::EventHandler(this, &MyForm::Btn_Interpolation_Enlarge_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label2->Location = System::Drawing::Point(12, 28);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"縮放倍率";
			// 
			// toolStrip10
			// 
			this->toolStrip10->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip10->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->Btn_Zoom });
			this->toolStrip10->Location = System::Drawing::Point(2, 49);
			this->toolStrip10->Name = L"toolStrip10";
			this->toolStrip10->Size = System::Drawing::Size(109, 27);
			this->toolStrip10->TabIndex = 1;
			this->toolStrip10->Text = L"toolStrip10";
			// 
			// Btn_Zoom
			// 
			this->Btn_Zoom->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_Zoom.Image")));
			this->Btn_Zoom->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->Btn_Zoom->Name = L"Btn_Zoom";
			this->Btn_Zoom->Size = System::Drawing::Size(79, 24);
			this->Btn_Zoom->Text = L"複製縮放";
			this->Btn_Zoom->Click += gcnew System::EventHandler(this, &MyForm::Btn_Zoom_Click);
			// 
			// toolStrip9
			// 
			this->toolStrip9->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip9->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->Textbox_ZoomRate });
			this->toolStrip9->Location = System::Drawing::Point(2, 24);
			this->toolStrip9->Name = L"toolStrip9";
			this->toolStrip9->Size = System::Drawing::Size(109, 25);
			this->toolStrip9->TabIndex = 0;
			this->toolStrip9->Text = L"toolStrip9";
			// 
			// Textbox_ZoomRate
			// 
			this->Textbox_ZoomRate->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->Textbox_ZoomRate->Name = L"Textbox_ZoomRate";
			this->Textbox_ZoomRate->Size = System::Drawing::Size(31, 25);
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
			this->groupBox4->Location = System::Drawing::Point(359, 30);
			this->groupBox4->Margin = System::Windows::Forms::Padding(2);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Padding = System::Windows::Forms::Padding(2);
			this->groupBox4->Size = System::Drawing::Size(115, 125);
			this->groupBox4->TabIndex = 7;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"繪圖工具";
			// 
			// Btn_Rectangle
			// 
			this->Btn_Rectangle->AutoSize = true;
			this->Btn_Rectangle->Location = System::Drawing::Point(8, 97);
			this->Btn_Rectangle->Margin = System::Windows::Forms::Padding(2);
			this->Btn_Rectangle->Name = L"Btn_Rectangle";
			this->Btn_Rectangle->Size = System::Drawing::Size(59, 24);
			this->Btn_Rectangle->TabIndex = 3;
			this->Btn_Rectangle->Text = L"矩形";
			this->Btn_Rectangle->UseVisualStyleBackColor = true;
			this->Btn_Rectangle->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Btn_Rectangle_CheckedChanged);
			// 
			// Btn_Circle
			// 
			this->Btn_Circle->AutoSize = true;
			this->Btn_Circle->Location = System::Drawing::Point(8, 74);
			this->Btn_Circle->Margin = System::Windows::Forms::Padding(2);
			this->Btn_Circle->Name = L"Btn_Circle";
			this->Btn_Circle->Size = System::Drawing::Size(59, 24);
			this->Btn_Circle->TabIndex = 2;
			this->Btn_Circle->Text = L"圓形";
			this->Btn_Circle->UseVisualStyleBackColor = true;
			this->Btn_Circle->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Btn_Circle_CheckedChanged);
			// 
			// Btn_Line
			// 
			this->Btn_Line->AutoSize = true;
			this->Btn_Line->Location = System::Drawing::Point(8, 46);
			this->Btn_Line->Margin = System::Windows::Forms::Padding(2);
			this->Btn_Line->Name = L"Btn_Line";
			this->Btn_Line->Size = System::Drawing::Size(59, 24);
			this->Btn_Line->TabIndex = 1;
			this->Btn_Line->Text = L"直線";
			this->Btn_Line->UseVisualStyleBackColor = true;
			this->Btn_Line->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Btn_Line_CheckedChanged);
			// 
			// Btn_None_Draw
			// 
			this->Btn_None_Draw->AutoSize = true;
			this->Btn_None_Draw->Checked = true;
			this->Btn_None_Draw->Location = System::Drawing::Point(8, 26);
			this->Btn_None_Draw->Margin = System::Windows::Forms::Padding(2);
			this->Btn_None_Draw->Name = L"Btn_None_Draw";
			this->Btn_None_Draw->Size = System::Drawing::Size(43, 24);
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
			this->label1->Location = System::Drawing::Point(112, 160);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(19, 16);
			this->label1->TabIndex = 8;
			this->label1->Text = L"X:";
			// 
			// Pos_x
			// 
			this->Pos_x->AutoSize = true;
			this->Pos_x->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Pos_x->Location = System::Drawing::Point(133, 160);
			this->Pos_x->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Pos_x->Name = L"Pos_x";
			this->Pos_x->Size = System::Drawing::Size(43, 16);
			this->Pos_x->TabIndex = 9;
			this->Pos_x->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label3->Location = System::Drawing::Point(202, 160);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(18, 16);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Y:";
			// 
			// Pos_y
			// 
			this->Pos_y->AutoSize = true;
			this->Pos_y->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Pos_y->Location = System::Drawing::Point(223, 160);
			this->Pos_y->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Pos_y->Name = L"Pos_y";
			this->Pos_y->Size = System::Drawing::Size(43, 16);
			this->Pos_y->TabIndex = 11;
			this->Pos_y->Text = L"label4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label5->Location = System::Drawing::Point(296, 160);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 16);
			this->label5->TabIndex = 12;
			this->label5->Text = L"RGB:";
			// 
			// Pos_RGBvalue
			// 
			this->Pos_RGBvalue->AutoSize = true;
			this->Pos_RGBvalue->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Pos_RGBvalue->Location = System::Drawing::Point(335, 160);
			this->Pos_RGBvalue->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Pos_RGBvalue->Name = L"Pos_RGBvalue";
			this->Pos_RGBvalue->Size = System::Drawing::Size(43, 16);
			this->Pos_RGBvalue->TabIndex = 13;
			this->Pos_RGBvalue->Text = L"label6";
			// 
			// Btn_Reset
			// 
			this->Btn_Reset->Location = System::Drawing::Point(58, 3);
			this->Btn_Reset->Margin = System::Windows::Forms::Padding(2);
			this->Btn_Reset->Name = L"Btn_Reset";
			this->Btn_Reset->Size = System::Drawing::Size(56, 18);
			this->Btn_Reset->TabIndex = 17;
			this->Btn_Reset->Text = L"Reset";
			this->Btn_Reset->UseVisualStyleBackColor = true;
			this->Btn_Reset->Click += gcnew System::EventHandler(this, &MyForm::Btn_Reset_Click);
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->Inverse_rotation);
			this->groupBox5->Controls->Add(this->toolStrip21);
			this->groupBox5->Controls->Add(this->Forward_rotation);
			this->groupBox5->Controls->Add(this->toolStrip20);
			this->groupBox5->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->groupBox5->Location = System::Drawing::Point(478, 26);
			this->groupBox5->Margin = System::Windows::Forms::Padding(2);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Padding = System::Windows::Forms::Padding(2);
			this->groupBox5->Size = System::Drawing::Size(170, 103);
			this->groupBox5->TabIndex = 18;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"旋轉";
			// 
			// Inverse_rotation
			// 
			this->Inverse_rotation->Location = System::Drawing::Point(92, 68);
			this->Inverse_rotation->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 360, 0, 0, 0 });
			this->Inverse_rotation->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 360, 0, 0, System::Int32::MinValue });
			this->Inverse_rotation->Name = L"Inverse_rotation";
			this->Inverse_rotation->Size = System::Drawing::Size(60, 29);
			this->Inverse_rotation->TabIndex = 3;
			this->Inverse_rotation->ValueChanged += gcnew System::EventHandler(this, &MyForm::Inverse_rotation_ValueChanged);
			// 
			// toolStrip21
			// 
			this->toolStrip21->Dock = System::Windows::Forms::DockStyle::None;
			this->toolStrip21->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripButton4 });
			this->toolStrip21->Location = System::Drawing::Point(6, 68);
			this->toolStrip21->Name = L"toolStrip21";
			this->toolStrip21->Size = System::Drawing::Size(89, 27);
			this->toolStrip21->TabIndex = 2;
			this->toolStrip21->Text = L"toolStrip21";
			// 
			// toolStripButton4
			// 
			this->toolStripButton4->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->toolStripButton4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton4.Image")));
			this->toolStripButton4->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton4->Name = L"toolStripButton4";
			this->toolStripButton4->Size = System::Drawing::Size(77, 24);
			this->toolStripButton4->Text = L"逆推法";
			// 
			// Forward_rotation
			// 
			this->Forward_rotation->Location = System::Drawing::Point(95, 26);
			this->Forward_rotation->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 360, 0, 0, 0 });
			this->Forward_rotation->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 360, 0, 0, System::Int32::MinValue });
			this->Forward_rotation->Name = L"Forward_rotation";
			this->Forward_rotation->Size = System::Drawing::Size(57, 29);
			this->Forward_rotation->TabIndex = 1;
			this->Forward_rotation->ValueChanged += gcnew System::EventHandler(this, &MyForm::Forward_rotation_ValueChanged);
			// 
			// toolStrip20
			// 
			this->toolStrip20->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripButton3 });
			this->toolStrip20->Location = System::Drawing::Point(2, 24);
			this->toolStrip20->Name = L"toolStrip20";
			this->toolStrip20->Size = System::Drawing::Size(166, 27);
			this->toolStrip20->TabIndex = 0;
			this->toolStrip20->Text = L"toolStrip20";
			// 
			// toolStripButton3
			// 
			this->toolStripButton3->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->toolStripButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton3.Image")));
			this->toolStripButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton3->Name = L"toolStripButton3";
			this->toolStripButton3->Size = System::Drawing::Size(77, 24);
			this->toolStripButton3->Text = L"順推法";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(2, 178);
			this->tabControl1->Margin = System::Windows::Forms::Padding(2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(675, 560);
			this->tabControl1->TabIndex = 19;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->pictureBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Margin = System::Windows::Forms::Padding(2);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(2);
			this->tabPage1->Size = System::Drawing::Size(667, 534);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"tabPage1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->pictureBox3);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Margin = System::Windows::Forms::Padding(2);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(2);
			this->tabPage2->Size = System::Drawing::Size(667, 534);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(5, 14);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(390, 288);
			this->pictureBox3->TabIndex = 0;
			this->pictureBox3->TabStop = false;
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->toolStrip17);
			this->groupBox6->Controls->Add(this->label4);
			this->groupBox6->Controls->Add(this->overlapping_trackbar);
			this->groupBox6->Controls->Add(this->toolStrip4);
			this->groupBox6->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->groupBox6->Location = System::Drawing::Point(670, 24);
			this->groupBox6->Margin = System::Windows::Forms::Padding(2);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Padding = System::Windows::Forms::Padding(2);
			this->groupBox6->Size = System::Drawing::Size(115, 140);
			this->groupBox6->TabIndex = 20;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"透明度";
			// 
			// toolStrip17
			// 
			this->toolStrip17->Dock = System::Windows::Forms::DockStyle::None;
			this->toolStrip17->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->Btn_Subtracting });
			this->toolStrip17->Location = System::Drawing::Point(9, 110);
			this->toolStrip17->Name = L"toolStrip17";
			this->toolStrip17->Size = System::Drawing::Size(87, 25);
			this->toolStrip17->TabIndex = 22;
			this->toolStrip17->Text = L"toolStrip17";
			// 
			// Btn_Subtracting
			// 
			this->Btn_Subtracting->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_Subtracting.Image")));
			this->Btn_Subtracting->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->Btn_Subtracting->Name = L"Btn_Subtracting";
			this->Btn_Subtracting->Size = System::Drawing::Size(75, 22);
			this->Btn_Subtracting->Text = L"影像相減";
			this->Btn_Subtracting->Click += gcnew System::EventHandler(this, &MyForm::Btn_Subtracting_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(16, 87);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(54, 20);
			this->label4->TabIndex = 21;
			this->label4->Text = L"label4";
			// 
			// overlapping_trackbar
			// 
			this->overlapping_trackbar->Location = System::Drawing::Point(6, 58);
			this->overlapping_trackbar->Margin = System::Windows::Forms::Padding(2);
			this->overlapping_trackbar->Maximum = 100;
			this->overlapping_trackbar->Name = L"overlapping_trackbar";
			this->overlapping_trackbar->Size = System::Drawing::Size(85, 45);
			this->overlapping_trackbar->TabIndex = 1;
			this->overlapping_trackbar->Visible = false;
			this->overlapping_trackbar->Scroll += gcnew System::EventHandler(this, &MyForm::overlapping_trackbar_Scroll);
			// 
			// toolStrip4
			// 
			this->toolStrip4->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip4->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->Btn_Overlapping });
			this->toolStrip4->Location = System::Drawing::Point(2, 24);
			this->toolStrip4->Name = L"toolStrip4";
			this->toolStrip4->Size = System::Drawing::Size(111, 27);
			this->toolStrip4->TabIndex = 0;
			this->toolStrip4->Text = L"toolStrip4";
			// 
			// Btn_Overlapping
			// 
			this->Btn_Overlapping->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_Overlapping.Image")));
			this->Btn_Overlapping->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->Btn_Overlapping->Name = L"Btn_Overlapping";
			this->Btn_Overlapping->Size = System::Drawing::Size(79, 24);
			this->Btn_Overlapping->Text = L"影像交疊";
			this->Btn_Overlapping->Click += gcnew System::EventHandler(this, &MyForm::Btn_Overlapping_Click);
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->toolStrip16);
			this->groupBox7->Controls->Add(this->toolStrip14);
			this->groupBox7->Controls->Add(this->toolStrip13);
			this->groupBox7->Controls->Add(this->toolStrip12);
			this->groupBox7->Controls->Add(this->toolStrip11);
			this->groupBox7->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->groupBox7->Location = System::Drawing::Point(789, 30);
			this->groupBox7->Margin = System::Windows::Forms::Padding(2);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Padding = System::Windows::Forms::Padding(2);
			this->groupBox7->Size = System::Drawing::Size(136, 166);
			this->groupBox7->TabIndex = 21;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"直方圖";
			// 
			// toolStrip16
			// 
			this->toolStrip16->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip16->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->Btn_Otsu_Histogram });
			this->toolStrip16->Location = System::Drawing::Point(2, 132);
			this->toolStrip16->Name = L"toolStrip16";
			this->toolStrip16->Size = System::Drawing::Size(132, 27);
			this->toolStrip16->TabIndex = 4;
			this->toolStrip16->Text = L"toolStrip16";
			// 
			// Btn_Otsu_Histogram
			// 
			this->Btn_Otsu_Histogram->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_Otsu_Histogram.Image")));
			this->Btn_Otsu_Histogram->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->Btn_Otsu_Histogram->Name = L"Btn_Otsu_Histogram";
			this->Btn_Otsu_Histogram->Size = System::Drawing::Size(96, 24);
			this->Btn_Otsu_Histogram->Text = L"O\'tsu直方圖";
			this->Btn_Otsu_Histogram->Click += gcnew System::EventHandler(this, &MyForm::Btn_Otsu_Histogram_Click);
			// 
			// toolStrip14
			// 
			this->toolStrip14->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip14->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->Specification_Histogram });
			this->toolStrip14->Location = System::Drawing::Point(2, 105);
			this->toolStrip14->Name = L"toolStrip14";
			this->toolStrip14->Size = System::Drawing::Size(132, 27);
			this->toolStrip14->TabIndex = 3;
			this->toolStrip14->Text = L"toolStrip14";
			// 
			// Specification_Histogram
			// 
			this->Specification_Histogram->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Specification_Histogram.Image")));
			this->Specification_Histogram->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->Specification_Histogram->Name = L"Specification_Histogram";
			this->Specification_Histogram->Size = System::Drawing::Size(103, 24);
			this->Specification_Histogram->Text = L"直方圖規定化";
			this->Specification_Histogram->Click += gcnew System::EventHandler(this, &MyForm::Specification_Histogram_Click);
			// 
			// toolStrip13
			// 
			this->toolStrip13->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip13->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->Equalization_Histogram });
			this->toolStrip13->Location = System::Drawing::Point(2, 78);
			this->toolStrip13->Name = L"toolStrip13";
			this->toolStrip13->Size = System::Drawing::Size(132, 27);
			this->toolStrip13->TabIndex = 2;
			this->toolStrip13->Text = L"toolStrip13";
			// 
			// Equalization_Histogram
			// 
			this->Equalization_Histogram->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Equalization_Histogram.Image")));
			this->Equalization_Histogram->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->Equalization_Histogram->Name = L"Equalization_Histogram";
			this->Equalization_Histogram->Size = System::Drawing::Size(91, 24);
			this->Equalization_Histogram->Text = L"直方圖等化";
			this->Equalization_Histogram->Click += gcnew System::EventHandler(this, &MyForm::Equalization_Histogram_Click);
			// 
			// toolStrip12
			// 
			this->toolStrip12->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip12->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->Btn_RGB_Histogram });
			this->toolStrip12->Location = System::Drawing::Point(2, 51);
			this->toolStrip12->Name = L"toolStrip12";
			this->toolStrip12->Size = System::Drawing::Size(132, 27);
			this->toolStrip12->TabIndex = 1;
			this->toolStrip12->Text = L"toolStrip12";
			// 
			// Btn_RGB_Histogram
			// 
			this->Btn_RGB_Histogram->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_RGB_Histogram.Image")));
			this->Btn_RGB_Histogram->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->Btn_RGB_Histogram->Name = L"Btn_RGB_Histogram";
			this->Btn_RGB_Histogram->Size = System::Drawing::Size(91, 24);
			this->Btn_RGB_Histogram->Text = L"三色直方圖";
			this->Btn_RGB_Histogram->Click += gcnew System::EventHandler(this, &MyForm::Btn_RGB_Histogram_Click);
			// 
			// toolStrip11
			// 
			this->toolStrip11->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip11->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->Btn_Gray_Histogran });
			this->toolStrip11->Location = System::Drawing::Point(2, 24);
			this->toolStrip11->Name = L"toolStrip11";
			this->toolStrip11->Size = System::Drawing::Size(132, 27);
			this->toolStrip11->TabIndex = 0;
			this->toolStrip11->Text = L"toolStrip11";
			// 
			// Btn_Gray_Histogran
			// 
			this->Btn_Gray_Histogran->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_Gray_Histogran.Image")));
			this->Btn_Gray_Histogran->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->Btn_Gray_Histogran->Name = L"Btn_Gray_Histogran";
			this->Btn_Gray_Histogran->Size = System::Drawing::Size(91, 24);
			this->Btn_Gray_Histogran->Text = L"灰階直方圖";
			this->Btn_Gray_Histogran->Click += gcnew System::EventHandler(this, &MyForm::Btn_Gray_Histogran_Click);
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->toolStrip15);
			this->groupBox8->Controls->Add(this->Threshold_value);
			this->groupBox8->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->groupBox8->Location = System::Drawing::Point(929, 30);
			this->groupBox8->Margin = System::Windows::Forms::Padding(2);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Padding = System::Windows::Forms::Padding(2);
			this->groupBox8->Size = System::Drawing::Size(116, 104);
			this->groupBox8->TabIndex = 22;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"閥值";
			// 
			// toolStrip15
			// 
			this->toolStrip15->Dock = System::Windows::Forms::DockStyle::None;
			this->toolStrip15->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip15->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->Btn_Otsu });
			this->toolStrip15->Location = System::Drawing::Point(9, 54);
			this->toolStrip15->Name = L"toolStrip15";
			this->toolStrip15->Size = System::Drawing::Size(72, 27);
			this->toolStrip15->TabIndex = 1;
			this->toolStrip15->Text = L"toolStrip15";
			// 
			// Btn_Otsu
			// 
			this->Btn_Otsu->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_Otsu.Image")));
			this->Btn_Otsu->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->Btn_Otsu->Name = L"Btn_Otsu";
			this->Btn_Otsu->Size = System::Drawing::Size(60, 24);
			this->Btn_Otsu->Text = L"O\'tsu";
			this->Btn_Otsu->Click += gcnew System::EventHandler(this, &MyForm::Btn_Otsu_Click);
			// 
			// Threshold_value
			// 
			this->Threshold_value->Location = System::Drawing::Point(9, 24);
			this->Threshold_value->Margin = System::Windows::Forms::Padding(2);
			this->Threshold_value->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 255, 0, 0, 0 });
			this->Threshold_value->Name = L"Threshold_value";
			this->Threshold_value->Size = System::Drawing::Size(98, 29);
			this->Threshold_value->TabIndex = 0;
			this->Threshold_value->ValueChanged += gcnew System::EventHandler(this, &MyForm::Threshold_value_ValueChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1124, 748);
			this->Controls->Add(this->groupBox8);
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
			this->Margin = System::Windows::Forms::Padding(2);
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
			this->toolStrip19->ResumeLayout(false);
			this->toolStrip19->PerformLayout();
			this->toolStrip18->ResumeLayout(false);
			this->toolStrip18->PerformLayout();
			this->toolStrip10->ResumeLayout(false);
			this->toolStrip10->PerformLayout();
			this->toolStrip9->ResumeLayout(false);
			this->toolStrip9->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Inverse_rotation))->EndInit();
			this->toolStrip21->ResumeLayout(false);
			this->toolStrip21->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Forward_rotation))->EndInit();
			this->toolStrip20->ResumeLayout(false);
			this->toolStrip20->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->toolStrip17->ResumeLayout(false);
			this->toolStrip17->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->overlapping_trackbar))->EndInit();
			this->toolStrip4->ResumeLayout(false);
			this->toolStrip4->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->toolStrip16->ResumeLayout(false);
			this->toolStrip16->PerformLayout();
			this->toolStrip14->ResumeLayout(false);
			this->toolStrip14->PerformLayout();
			this->toolStrip13->ResumeLayout(false);
			this->toolStrip13->PerformLayout();
			this->toolStrip12->ResumeLayout(false);
			this->toolStrip12->PerformLayout();
			this->toolStrip11->ResumeLayout(false);
			this->toolStrip11->PerformLayout();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->toolStrip15->ResumeLayout(false);
			this->toolStrip15->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Threshold_value))->EndInit();
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
		switch (code)  
		{
		case RGB2Gray:
			for (int i = 0; i < src->Width; i++)
			{
				for (int j = 0; j < src->Height; j++)
				{
					//灰階化公式:R*0.299 + G*0.587 + B*0.114+0.5
					int grayvalue = src->GetPixel(i, j).R*0.299 + src->GetPixel(i, j).G*0.587 + src->GetPixel(i, j).B*0.114 + 0.5;
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
	for (int i = 0; i < src->Width; i++) //確認是否有先灰階化
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
					dst->SetPixel(i, j, Color::FromArgb(255, 255, 255));  //白
				else if (code == Threshold_Binary_Inverse)
					dst->SetPixel(i, j, Color::FromArgb(0, 0, 0));  //黑
			}
			else if (src->GetPixel(i, j).R < threshold)
			{
				if (code == Threshold_Binary)
					dst->SetPixel(i, j, Color::FromArgb(0, 0, 0));  //黑
				else if (code == Threshold_Binary_Inverse)
					dst->SetPixel(i, j, Color::FromArgb(255,255,255));  //白
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
		//int width = src->Width*ZoomRate + 0.5;
		//int height = src->Height*ZoomRate + 0.5;
		switch (code)
		{
		case Zoom:
			for (unsigned int i = 0; i < dst->Width; i++)
				for (unsigned int j = 0; j < dst->Height; j++)
				{
					float index_x = (float)(i / ZoomRate);
					float index_y = (float)(j / ZoomRate);
					dst->SetPixel(i, j, src->GetPixel((int)index_x + 0.5, (int)index_y + 0.5));
				}
			break;
		case Duplication:
			if (ZoomRate < 1)
				MessageBox::Show("Please enter number bigger than 1.");
			else
			{
				for (unsigned int i = 0; i < dst->Width; i++)
					for (unsigned int j = 0; j < dst->Height; j++)
					{
						float index_x = (float)(i / ZoomRate);
						float index_y = (float)(j / ZoomRate);
						dst->SetPixel(i, j, src->GetPixel((int)index_x + 0.5, (int)index_y + 0.5));
					}
			}
			break;
		case Interpolation:
			if (ZoomRate < 1)
				MessageBox::Show("Please enter number bigger than 1.");
			else
			{
				for (unsigned int j = 0; j < dst->Height; j++)
				{
					for (unsigned int i = 0; i < dst->Width; i++)
					{

						float real_X = i / ZoomRate;
						float real_Y = j / ZoomRate;
						int set_X = (int)real_X; //pixel位置為整數
						int set_Y = (int)real_Y;
						float difference_X = real_X - set_X;  //實際pixel位置與放大倍數間的誤差
						float difference_Y = real_Y - set_Y;
						if (difference_X < 0)
						{
							difference_X = 1 + difference_X;
							set_X = set_X - 1;
						}

						if (difference_Y < 0)
						{
							difference_Y = 1 + difference_Y;
							set_Y = set_Y - 1;
						}

						if (set_X >= src->Width - 1)//檢查是否有超過原圖的寬(插值會以靠近的那個pixel作為該點的值，所以可能超出範圍)
						{
							difference_X = 1;
							set_X = set_X - 1;
						}
						if (set_Y >= src->Height - 1)//檢查是否有超過原圖的高
						{
							difference_Y = 1;
							set_Y = set_Y - 1;
						}
						int R = 0.5*((1 - difference_X) * (src->GetPixel(set_X, set_Y).R + src->GetPixel(set_X, set_Y).R) + difference_X * (src->GetPixel(set_X + 1, set_Y).R + src->GetPixel(set_X, set_Y + 1).R));
						int G = 0.5*((1 - difference_X) * (src->GetPixel(set_X, set_Y).G + src->GetPixel(set_X, set_Y).G) + difference_X * (src->GetPixel(set_X + 1, set_Y).G + src->GetPixel(set_X, set_Y + 1).G));
						int B = 0.5*((1 - difference_X) * (src->GetPixel(set_X, set_Y).B + src->GetPixel(set_X, set_Y).B) + difference_X * (src->GetPixel(set_X + 1, set_Y).B + src->GetPixel(set_X, set_Y + 1).B));

						Color c = Color::FromArgb(R, G, B);
						dst->SetPixel(i, j, c);
						//dst->SetPixel(i, j, src->GetPixel((int)index_x + 0.5, (int)index_y + 0.5));
					}
				}
			}
			break;
		case Decimation:
			if (ZoomRate > 1)
				MessageBox::Show("Please enter number smaller than 1.");
			else
			{
				for (unsigned int i = 0; i < dst->Width; i++)
					for (unsigned int j = 0; j < dst->Height; j++)
					{
						float index_x = (float)(i / ZoomRate);
						float index_y = (float)(j / ZoomRate);
						dst->SetPixel(i, j, src->GetPixel((int)index_x + 0.5, (int)index_y + 0.5));
					}
			}
			break;
		case Average:  //***只能縮小0.5倍，要改code***
			if (ZoomRate > 1)
				MessageBox::Show("Please enter number smaller than 1.");
			else
			{
				double mean = (double)(ZoomRate*ZoomRate);
				for (unsigned int j = 0; j < dst->Height; j++)
				{
					for (unsigned int i = 0; i < dst->Width; i++)
					{
						int ori_R = 0;
						int ori_G = 0;
						int ori_B = 0; 
						for (int average_y = 0; average_y < (1/ZoomRate); average_y++)
						{
							for (int average_x = 0; average_x < (1/ZoomRate); average_x++)
							{
								int set_x = 2 * i + average_x;
								int set_y = 2 * j + average_y;
								ori_R += src->GetPixel(set_x, set_y).R;
								ori_G += src->GetPixel(set_x, set_y).G;
								ori_B += src->GetPixel(set_x, set_y).B;
							}
						}
						ori_R = ori_R * mean;
						ori_G = ori_G * mean;
						ori_B = ori_B * mean;
						dst->SetPixel(i, j, Color::FromArgb(ori_R, ori_G, ori_B));
					}
				}
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
	
	if (img_source == nullptr || img_source2 == nullptr)
	{
		if (img_source == nullptr)
			MessageBox::Show("No image1 input");
		else
			MessageBox::Show("No image2 input");
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
				Color color;
				if ((x < img_source->Width) && (x < img_source2->Width) && (y < img_source->Height) && (y < img_source2->Height))
				{
					short R = (img_source2->GetPixel(x, y).R * transparency + img_source->GetPixel(x, y).R * (100 - transparency)) / 100;
					short G = (img_source2->GetPixel(x, y).G * transparency + img_source->GetPixel(x, y).G * (100 - transparency)) / 100;
					short B = (img_source2->GetPixel(x, y).B * transparency + img_source->GetPixel(x, y).B * (100 - transparency)) / 100;
					color = Color::FromArgb(R, G, B);
				}
				else if ((x > img_source->Width) || (y > img_source->Height))
				{
					if ((x < img_source2->Width) && (y < img_source2->Height)) //第二張圖比第一張小
					{
						short R = (img_source2->GetPixel(x, y).R * transparency + Color::AliceBlue.R * (100 - transparency)) / 100;
						short G = (img_source2->GetPixel(x, y).G * transparency + Color::AliceBlue.G * (100 - transparency)) / 100;
						short B = (img_source2->GetPixel(x, y).B * transparency + Color::AliceBlue.B * (100 - transparency)) / 100;
						color = Color::FromArgb(R, G, B);
					}

				}
				else if ((x > img_source2->Width) || (y > img_source2->Height))
				{
					if ((x < img_source->Width) && (y < img_source->Height))  //第一張圖比第二張小
					{
						short R = (Color::AliceBlue.R * transparency + img_source->GetPixel(x, y).R * (100 - transparency)) / 100;
						short G = (Color::AliceBlue.G * transparency + img_source->GetPixel(x, y).G * (100 - transparency)) / 100;
						short B = (Color::AliceBlue.B * transparency + img_source->GetPixel(x, y).B * (100 - transparency)) / 100;
						color = Color::FromArgb(R, G, B);
					}
				}
				img_processed->SetPixel(x, y, color);
			}
		}
		pictureBox2->Image = img_processed;
	}
}
public:void SubtractingFunction()
{
	if (img_source == nullptr || img_source2 == nullptr)
	{
		if(img_source == nullptr)
			MessageBox::Show("No image1 input");
		else
			MessageBox::Show("No image2 input");
	}
	else
	{
		Bitmap^ img_processed = gcnew Bitmap(img_source->Width, img_source->Height);
		for (int j = 0; j < (img_source->Height); j++)
		{
			for (int i = 0; i < (img_source->Width); i++)
			{
				short img_source1_Gray = (img_source->GetPixel(i, j).R) * 0.299 + (img_source->GetPixel(i, j).G) * 0.587 + (img_source->GetPixel(i, j).B) * 0.114 + 0.5;
				short img_source2_Gray = (img_source2->GetPixel(i, j).R) * 0.299 + (img_source2->GetPixel(i, j).G) * 0.587 + (img_source2->GetPixel(i, j).B) * 0.114 + 0.5;
				short subtracging_Gray = Math::Abs(img_source1_Gray - img_source2_Gray);  //灰階值相減取絕對值
				img_processed->SetPixel(i, j, Color::FromArgb(subtracging_Gray, subtracging_Gray, subtracging_Gray));
			}
		}
		pictureBox2->Image = img_processed;
	}
}
public:void Threshold_Changing(Bitmap ^src, Bitmap ^%dst, int threshold)
{
	for (int i = 0; i < src->Width; i++)   //確認是否有先灰階化
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
					dst->SetPixel(i, j, Color::FromArgb(255, 255, 255));  //白
			}
			else if (src->GetPixel(i, j).R < threshold)
			{
					dst->SetPixel(i, j, Color::FromArgb(0, 0, 0));  //黑
			}

		}
	}
}
public:int Otsu_Threshold()
{
	Bitmap ^img_processed;
	ConvertColor(img_source, img_processed, RGB2Gray); //先將圖轉成灰階(因為要算灰值統計)
	float His_color[256] = { 0 }; //灰度值0~255 RGB值均會相同
	float total_pixel = (img_processed->Width) * (img_processed->Height); //計算整張圖片的pixel數

																		  //*** 1. 取得影像的直方圖，計算出每個灰度值出現的pixel數 ***
	for (int x = 0; x < (img_processed->Width); x++)
	{
		for (int y = 0; y < (img_processed->Height); y++)
		{
			int color = img_processed->GetPixel(x, y).R;
			if (color == img_processed->GetPixel(x, y).G && color == img_processed->GetPixel(x, y).B)  //當RGB值相同(即灰色)
			{
				His_color[color] += 1; //0~255出現的那個灰度值+1，計算出現頻率
			}
		}
	}
	//計算每個灰度值出現的機率
	float P[256] = { 0 };
	for (int i = 0; i < 256; i++)
	{
		P[i] = (His_color[i]) / total_pixel;
	}
	//計算灰度值總平均
	float mu = 0;
	for (int i = 0; i < 256; i++)
	{
		mu += i*(P[i]);
	}
	//開始計算各種參數
	float max_variance_between = 0; //初始化群間變異數最大值
	int Otsu_threshold = 0;//初始化Otsu閥值

	for (int i = 0; i < 256; i++) //灰度值0~255
	{
		float w1 = 0, w2 = 0; //第一群與第二群出現的機率
		float mu1 = 0, mu2 = 0; //第一群與第二群的平均
		float variance1 = 0, variance2 = 0;//第一群與第二群的變異數
		float variance_between = 0;//群間變異數

		for (int t = 0; t < i; t++)  //計算第一群
		{
			w1 += P[t];
		}
		for (int t = 0; t < i; t++)
		{
			mu1 += t * (P[t] / w1);
		}
		/*for (int t = 0; t < i; t++)  //變異數用不到
		{
		variance1 += (P[t] / w1)*(t - mu1)*(t - mu1);
		}*/
		for (int t = i; t < 256; t++)  //計算第二群
		{
			w2 += P[t];
		}
		for (int t = i; t < 256; t++)
		{
			mu2 += t * (P[t] / w2);
		}
		/*for (int t = i; t < 256; t++)  //變異數用不到
		{
		variance2 += (P[t] / w2)*(t - mu2)*(t - mu2);
		}*/

		//Otsu群間最大差異的評估準則
		variance_between = w1*(mu1 - mu)*(mu1 - mu) + w2*(mu2 - mu)*(mu2 - mu);
		if (max_variance_between < variance_between)
		{
			max_variance_between = variance_between;
			Otsu_threshold = i;   //***2. 利用Otsu對直方圖找出最佳的閥值***
		}
	}
	Threshold_Changing(img_processed, img_processed, Otsu_threshold);//*** 3. 利用找出來的閥值將影像二值化***
	Threshold_value->Text = Otsu_threshold.ToString();
	pictureBox2->Image = img_processed;
	return Otsu_threshold;
}
public:void Gray_HisFunction(Bitmap ^src, Bitmap ^%dst, int histogram_mode)
{
	if (src != nullptr)
	{
		ConvertColor(src, dst, RGB2Gray); //先將圖轉成灰階(因為要算灰值統計
		short Gray_Value[256] = { 0 }; //灰度值0~255 RGB值均會相同
		switch (histogram_mode)
		{
			case gray_histogram:
			{
				GrayHistogram ^Gray_His = gcnew GrayHistogram;
				pictureBox2->Image = dst;
				for (int x = 0; x < (dst->Width); x++)
				{
					for (int y = 0; y < (dst->Height); y++)
					{
						int color = dst->GetPixel(x, y).B;
						if (color == dst->GetPixel(x, y).R && color == dst->GetPixel(x, y).G)  //當RGB值相同(即灰色)
						{
							Gray_Value[color] += 1;
						}
					}
				}
				for (int i = 0; i < 256; i++)  //將灰度值出現的頻率輸出到統計圖上
				{
					Gray_His->Gray_Chart->Series["Gray"]->Points->AddXY(i, Gray_Value[i]);  //需要將.h檔中的Gray_Chart改成public才可存取
				}
				Gray_His->Show(); //秀出統計圖
			}
				break;

			case specification_histogram_origin:
			{
				Specification_His->specific_origin->Image = dst;
				for (int x = 0; x < (dst->Width); x++)
				{
					for (int y = 0; y < (dst->Height); y++)
					{
						int color = dst->GetPixel(x, y).B;
						if (color == dst->GetPixel(x, y).R && color == dst->GetPixel(x, y).G)  //當RGB值相同(即灰色)
						{
							Gray_Value[color] += 1;
						}
					}
				}
				for (int i = 0; i < 256; i++)  //將灰度值出現的頻率輸出到統計圖上
				{
					Specification_His->Origin_Chart->Series["Origin"]->Points->AddXY(i, Gray_Value[i]);  //需要將.h檔中的Gray_Chart改成public才可存取
				}
			}
				break;

			case specification_histogram_object:
			{
				
				Specification_His->specific_object->Image = dst;
				for (int x = 0; x < (dst->Width); x++)
				{
					for (int y = 0; y < (dst->Height); y++)
					{
						int color = dst->GetPixel(x, y).B;
						if (color == dst->GetPixel(x, y).R && color == dst->GetPixel(x, y).G)  //當RGB值相同(即灰色)
						{
							Gray_Value[color] += 1;
						}
					}
				}
				for (int i = 0; i < 256; i++)  //將灰度值出現的頻率輸出到統計圖上
				{
					Specification_His->Object_Chart->Series["Object"]->Points->AddXY(i, Gray_Value[i]);  //需要將.h檔中的Gray_Chart改成public才可存取
				}
				Specification_His->Show(); //秀出統計圖
				//delete Specification_His;
			}
				break;
		}
	}
}
public:void Rotation(Bitmap ^src, Bitmap ^%dst, double theta)
{
	double vcos, vsin;
	int min_x = 1000;
	int min_y = 1000;
	if (theta < 0) theta += 360;  //ex:轉-30度跟轉330度是一樣的意思
	theta *= 0.01745329252; // 轉弳度
	vsin = sin(theta), vcos = cos(theta);  //找出sin cos值
	if (img_source == nullptr)
		MessageBox::Show("No image1 input");
	else
	{
		int  newWidth = abs(src->Width*vcos) + abs(src->Height*vsin);  //找出原圖旋轉後用來塞入原圖的矩形長寬
		int newHeight = abs(src->Width*vsin) + abs(src->Height*vcos);  //
		Bitmap^ temp_result = gcnew Bitmap(newWidth, newHeight, src->PixelFormat);  //創建出一個可以塞下旋轉後矩形的矩形


		for (int i = 0; i < src->Width; i++)
		{
			for (int j = 0; j < src->Height; j++)
			{
				int nx, ny;  //旋轉後的x y座標
				nx = (int)(vcos*i - vsin*j);
				ny = (int)(vsin*i + vcos*j);
				if (nx < min_x) min_x = nx;  //找出原作標轉換後的最小座標點min_x min_y(因為是原點當圓心轉所以會是負值或0)
				if (ny < min_y) min_y = ny;
			}
		}
		min_x = abs(min_x);  //取絕對值求得偏移量，用來將旋轉後的圖修正回座標均大於等於0
		min_y = abs(min_y);
		for (int i = 0; i < temp_result->Width; i++) //將矩形的顏色做成與背景同色
			for (int j = 0; j < temp_result->Height; j++)
			{
				temp_result->SetPixel(i, j, Color::FromArgb(0, 0, 0));  //240
			}
		for (int i = 0; i < src->Width; i++)
		{
			for (int j = 0; j < src->Height; j++)
			{
				int nx, ny;
				nx = (int)(vcos*i - vsin*j + min_x + 0.5);
				ny = (int)(vsin*i + vcos*j + min_y + 0.5);
				if ((nx < newWidth) && (ny < newHeight)) //檢查是否有在原圖旋轉後產生的矩形中
					temp_result->SetPixel(nx, ny, src->GetPixel(i, j));
			}
		}
		Rectangle cloneRect = Rectangle(0, 0, temp_result->Width, temp_result->Height);
		dst = temp_result->Clone(cloneRect, src->PixelFormat);
		delete temp_result;
	}
}
private:void Inverse_Rotation(Bitmap ^src, Bitmap ^%dst, double theta) {

	double vcos, vsin;
	int min_x = 1000;
	int min_y = 1000;
	if (theta < 0) theta += 360;  //ex:轉-30度跟轉330度是一樣的意思
	theta *= 0.01745329252; // 轉弳度
	vsin = sin(theta), vcos = cos(theta);  //找出sin cos值
	if (img_source == nullptr)
		MessageBox::Show("No image1 input");
	else
	{
		int  newWidth = abs(src->Width*vcos) + abs(src->Height*vsin);  //找出原圖旋轉後用來塞入原圖的矩形長寬
		int newHeight = abs(src->Width*vsin) + abs(src->Height*vcos);  //
		Bitmap^ temp_result = gcnew Bitmap(newWidth, newHeight, src->PixelFormat);//創建出一個可以塞下旋轉後矩形的矩形


		for (int i = 0; i < src->Width; i++)
		{
			for (int j = 0; j < src->Height; j++)
			{
				int nx, ny;  //原圖旋轉後的x y座標
				nx = (int)(vcos*i - vsin*j);
				ny = (int)(vsin*i + vcos*j);
				if (nx < min_x) min_x = nx;  //找出原作標轉換後的最小座標點min_x min_y(因為是原點當圓心轉所以會是負值或0)
				if (ny < min_y) min_y = ny;
			}
		}
		for (int i = min_x; i < min_x + newWidth; i++)
		{
			for (int j = min_y; j < min_y + newHeight; j++)
			{
				int nx, ny;  //逆旋轉後的x y座標
				nx = (int)(vcos*i + vsin*j + 0.5);
				ny = (int)(-vsin*i + vcos*j + 0.5);
				if ((nx < src->Width) && (nx > 0) && (ny < src->Height) && (ny > 0))  //在原圖內
					temp_result->SetPixel(i + abs(min_x), j + abs(min_y), src->GetPixel(nx, ny));  //abs用來修正偏移量
				else  //在原圖外(設成與背景相同顏色)
					temp_result->SetPixel(i + abs(min_x), j + abs(min_y), Color::FromArgb(0, 0, 0));  //240
			}
		}

		Rectangle cloneRect = Rectangle(0, 0, temp_result->Width, temp_result->Height);
		dst = temp_result->Clone(cloneRect, src->PixelFormat);
		delete temp_result;
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
	overlapping_trackbar->Visible = false;
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
private: System::Void Btn_Threshold_Binary_Click(System::Object^  sender, System::EventArgs^  e) {
	Bitmap ^img_processed;
	ConvertColor(img_source, img_processed, RGB2Gray);
	Threshold(img_processed,img_processed,100,Threshold_Binary);
	pictureBox2->Image = img_processed;
}
private: System::Void Btn_Threshold_Binary_Inverse_Click_1(System::Object^  sender, System::EventArgs^  e) {
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
	//複製縮放
	Bitmap ^imgprocessed;
	double ZoomRate = System::Convert::ToDouble(Textbox_ZoomRate->Text);
	ZoomFunction(img_source, imgprocessed, ZoomRate, Zoom);
	pictureBox2->Image = imgprocessed;
}
private: System::Void Btn_Duplication_Enlarge_Click(System::Object^  sender, System::EventArgs^  e) {
	//複製放大
	Bitmap ^imgprocessed = img_source;
	double ZoomRate = System::Convert::ToDouble(Textbox_ZoomRate->Text);
	ZoomFunction(imgprocessed, imgprocessed, ZoomRate, Duplication);
	pictureBox2->Image = imgprocessed;
}
private: System::Void Btn_Interpolation_Enlarge_Click(System::Object^  sender, System::EventArgs^  e) {
	//內插放大
	Bitmap ^imgprocessed = img_source;
	double ZoomRate = System::Convert::ToDouble(Textbox_ZoomRate->Text);
	ZoomFunction(imgprocessed, imgprocessed, ZoomRate, Interpolation);
	pictureBox2->Image = imgprocessed;
}
private: System::Void Btn_Decimation_Reduce_Click(System::Object^  sender, System::EventArgs^  e) {
	//刪去縮小
	Bitmap ^imgprocessed = img_source;
	double ZoomRate = System::Convert::ToDouble(Textbox_ZoomRate->Text);
	ZoomFunction(imgprocessed, imgprocessed, ZoomRate, Decimation);
	pictureBox2->Image = imgprocessed;
}
private: System::Void Btn_Average_Reduce_Click(System::Object^  sender, System::EventArgs^  e) {
	//平均縮小
	Bitmap ^imgprocessed = img_source;
	double ZoomRate = System::Convert::ToDouble(Textbox_ZoomRate->Text);
	ZoomFunction(imgprocessed, imgprocessed, ZoomRate, Average);
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
private: System::Void Btn_Overlapping_Click(System::Object^  sender, System::EventArgs^  e) {
	overlapping_trackbar->Visible = true;
}
private: System::Void overlapping_trackbar_Scroll(System::Object^  sender, System::EventArgs^  e) {
	int transparency = overlapping_trackbar->Value; //transparency = 透明度
	label4->Text = transparency.ToString()+"%";
	OverlappingFunction(transparency);
}
private: System::Void Btn_Gray_Histogran_Click(System::Object^  sender, System::EventArgs^  e) {
	Bitmap ^img_processed;
	Gray_HisFunction(img_source, img_processed, gray_histogram);
}
private: System::Void Btn_RGB_Histogram_Click(System::Object^  sender, System::EventArgs^  e) {
	Bitmap ^img_processed;
	RGBHistogram ^RGB_His = gcnew RGBHistogram;
	short His_Color[256][3] = { {0} };  //建立RGB矩陣 256:RGB value 3:RGB三種顏色
	img_processed = img_source;
	pictureBox2->Image = img_source;
	for (int i = 0; i < (img_processed->Width); i++)
	{
		for (int j = 0; j < (img_processed->Height); j++)
		{
			int B = img_processed->GetPixel(i, j).B;
			int R = img_processed->GetPixel(i, j).R;
			int G = img_processed->GetPixel(i, j).G;
			if (!(B == Color::AliceBlue.B &&  G == Color::AliceBlue.G && R == Color::AliceBlue.R))  //當RGB三值不完全相同
			{
				His_Color[R][0] += 1;  //RGB三種顏色的0~255中的某值加一
				His_Color[G][1] += 1;
				His_Color[B][2] += 1;
			}
		}
	}
	for (int i = 0; i < 256; i++) //將RGB出現的頻率輸出到統計圖上
	{
		RGB_His->RGB_Chart->Series["Red"]->Points->AddXY(i, His_Color[i][0]);//需要將.h檔中的RGB_Chart改成public才可存取
		RGB_His->RGB_Chart->Series["Green"]->Points->AddXY(i, His_Color[i][1]);
		RGB_His->RGB_Chart->Series["Blue"]->Points->AddXY(i, His_Color[i][2]);
	}
	RGB_His->Show(); //秀出統計圖
}
private: System::Void Equalization_Histogram_Click(System::Object^  sender, System::EventArgs^  e) {
	Bitmap ^img_processed;
	EqualizationHistogram ^Equa_His = gcnew EqualizationHistogram;
	ConvertColor(img_source, img_processed, RGB2Gray);
	int Gray_His[256] = { 0 };  //灰階值出現次數
	int Gray_His_Cumulation[256] = { 0 }; //灰階值次數累加

	int total_pixel = img_source->Width * img_source->Height;

	for (int i = 0; i < img_processed->Width; i++)  //計算整張圖中每個灰度值出現的次數
	{
		for (int j = 0; j < img_processed->Height; j++)
		{
			int color = img_processed->GetPixel(i, j).B;
			if (color == img_processed->GetPixel(i, j).R && color == img_processed->GetPixel(i, j).G)
			{
				Gray_His[color] += 1;
			}
		}
	}

	Gray_His_Cumulation[0] = Gray_His[0];
	for (int i = 1; i < 256; i++)  //累加
	{
		Gray_His_Cumulation[i] = (Gray_His_Cumulation[i - 1] + Gray_His[i]);
	}
	for (int i = 0; i < 256; i++)
	{
		Equa_His->chart1->Series["Equalization"]->Points->AddXY(i, Gray_His_Cumulation[i]);
	}
	for (int i = 0; i < 256; i++)
	{
		float S_Pic = (float)Gray_His_Cumulation[i] / total_pixel * 255; //出現機率*255 算權重嗎?
		Gray_His_Cumulation[i] = S_Pic + 0.5;  //四捨五入
	}

	for (int i = 0; i < img_processed->Width; i++)
	{
		for (int j = 0; j < img_processed->Height; j++)
		{
			int color = img_processed->GetPixel(i, j).B;
			color = Gray_His_Cumulation[color];
			img_processed->SetPixel(i, j, Color::FromArgb(color, color, color));
		}
	}
	Equa_His->Show();
	pictureBox2->Image = img_processed;
}
private: System::Void Threshold_value_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	Bitmap ^img_processed;
	int threshold = Convert::ToInt32(Threshold_value->Text);//讀取輸入的閥值
	ConvertColor(img_source, img_processed, RGB2Gray);//灰階化
	Threshold_Changing(img_processed, img_processed, threshold);//動態二值化
	pictureBox2->Image = img_processed;
}
private: System::Void Btn_Otsu_Click(System::Object^  sender, System::EventArgs^  e) {
	/*利用Otsu進行影像二值化的流程如下：
	  1. 取得影像的直方圖
	  2. 利用Otsu對直方圖找出最佳的閥值
	  3. 利用找出來的閥值將影像二值化*/
	/*步驟:
	  1.算出整張圖的pixel數
	  2.做出灰階直方圖
	  3.算出每個灰度值出現的機率
	  4.計算灰度值總平均
	  5.將閥值從0~255均試過一次，利用閥值切成左右兩群，依序算出機率、平均值與群間變異數
	  6.找出群間變異數最大值，該灰度值的閥值即為Otsu閥值
	*/
	Otsu_Threshold();
}
private: System::Void Btn_Subtracting_Click(System::Object^  sender, System::EventArgs^  e) {
	SubtractingFunction();  //影像相減
}
private: System::Void Btn_Otsu_Histogram_Click(System::Object^  sender, System::EventArgs^  e) {
	Bitmap ^img_processed;
	OtsuHistogram ^Otsu_His = gcnew OtsuHistogram;
	ConvertColor(img_source, img_processed, RGB2Gray); //先將圖轉成灰階(因為要算灰值統計
	short Gray_Value[256] = { 0 }; //灰度值0~255 RGB值均會相同

	for (int x = 0; x < (img_processed->Width); x++) //統計灰度值出現次數
	{
		for (int y = 0; y < (img_processed->Height); y++)
		{
			int color = img_processed->GetPixel(x, y).B;
			if (color == img_processed->GetPixel(x, y).R && color == img_processed->GetPixel(x, y).G)  //當RGB值相同(即灰色)
			{
				Gray_Value[color] += 1;
			}
		}
	}
	int Otsu_threshold = Otsu_Threshold(); //用Otsu法找出閥值代表的灰度值
	for (int i = 0; i < 256; i++)  //將灰度值出現的頻率輸出到統計圖上
	{
		Otsu_His->Otsu_Chart->Series["Gray"]->Points->AddXY(i, Gray_Value[i]);  //需要將.h檔中的Gray_Chart改成public才可存取
		if(i == Otsu_threshold)
			Otsu_His->Otsu_Chart->Series["Otsu"]->Points->AddXY(i, Gray_Value[i]);  //將Otsu算出的灰階閥值標示成紅色
	}
	Otsu_His->Show(); //秀出統計圖
}
private: System::Void Specification_Histogram_Click(System::Object^  sender, System::EventArgs^  e) {
	Bitmap ^img_processed1,^img_processed2;
	if (img_source == nullptr || img_source2 == nullptr)
	{
		if (img_source == nullptr)
			MessageBox::Show("No image1 input");
		else
			MessageBox::Show("No image2 input");
	}
	else
	{
		Gray_HisFunction(img_source, img_processed1, specification_histogram_origin);
		Gray_HisFunction(img_source2, img_processed2, specification_histogram_object);
	}
}
private: System::Void Forward_rotation_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	Bitmap ^img_processed;
	int theta = Convert::ToInt32(Forward_rotation->Text);//讀取輸入的角度
	Rotation(img_source, img_processed, theta);
	pictureBox2->Image = img_processed;
}
private: System::Void Inverse_rotation_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	Bitmap ^img_processed;
	int theta = Convert::ToInt32(Inverse_rotation->Text);//讀取輸入的角度
	Inverse_Rotation(img_source, img_processed, theta);
	pictureBox2->Image = img_processed;
}
};
}
