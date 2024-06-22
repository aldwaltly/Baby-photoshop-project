#include <Windows.h>
#include<string>
#include <cmath>
#include"Image_Class.h"


namespace Project1 {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
        {
            InitializeComponent();
        }

    protected:
        ~MyForm()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::PictureBox^ pictureBox1;
    private: System::Windows::Forms::OpenFileDialog^ ofd1;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Button^ button3;
    private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::PictureBox^ pictureBox2;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Button^ button4;

    private: System::Windows::Forms::Button^ button5;
    private: System::Windows::Forms::Button^ button6;
    private: System::Windows::Forms::Button^ button7;
    private: System::Windows::Forms::TrackBar^ trackBar1;
    private: System::Windows::Forms::Button^ button8;
    private: System::Windows::Forms::Button^ button9;
    private: System::Windows::Forms::Button^ button10;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::Button^ button11;
    private: System::Windows::Forms::Button^ button12;
    private: System::Windows::Forms::Button^ button13;
    private: System::Windows::Forms::Button^ button14;
    private: System::Windows::Forms::Button^ button15;
    private: System::Windows::Forms::Button^ button17;
    private: System::Windows::Forms::Label^ label9;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::Label^ label10;
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::Label^ label11;
    private: System::Windows::Forms::Label^ label12;
    private: System::Windows::Forms::TextBox^ textBox3;
    private: System::Windows::Forms::Label^ label13;
    private: System::Windows::Forms::Button^ button16;
    private: System::Windows::Forms::Button^ button18;
    private: System::Windows::Forms::Button^ button19;
    private: System::Windows::Forms::PictureBox^ pictureBox3;
    private: System::Windows::Forms::Button^ button20;
    private: System::Windows::Forms::Button^ button21;
    private: System::Windows::Forms::Button^ button22;
    private: System::Windows::Forms::Label^ label14;
    private: System::Windows::Forms::Label^ label15;
    private: System::Windows::Forms::Button^ button23;
    private: System::Windows::Forms::Button^ button24;
    private: System::Windows::Forms::Button^ button25;
    private: System::Windows::Forms::Button^ button26;
    private: System::Windows::Forms::TrackBar^ trackBar2;
    private: System::Windows::Forms::Button^ button27;
    private: System::Windows::Forms::Button^ button28;
    private: System::Windows::Forms::Button^ button29;
    private: System::Windows::Forms::Button^ button30;
    private: System::Windows::Forms::Button^ button31;
    private: System::Windows::Forms::TextBox^ textBox4;
    private: System::Windows::Forms::Label^ label16;
    private: System::Windows::Forms::TextBox^ textBox5;
    private: System::Windows::Forms::Label^ label17;
    private: System::Windows::Forms::TextBox^ textBox6;
    private: System::Windows::Forms::TextBox^ textBox7;
    private: System::Windows::Forms::Label^ label18;
    private: System::Windows::Forms::Label^ label19;

    private: System::Windows::Forms::Label^ label21;
    private: System::Windows::Forms::Label^ label22;
    private: System::Windows::Forms::PictureBox^ pictureBox4;
    private: System::Windows::Forms::Label^ label20;
    private: System::Windows::Forms::Button^ button32;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Button^ button33;
    private: System::Windows::Forms::Button^ button34;
    private: System::Windows::Forms::Button^ button35;
    private: System::Windows::Forms::Button^ button36;
    private: System::Windows::Forms::Label^ label23;
    private: System::Windows::Forms::Button^ button37;
    private: System::Windows::Forms::Button^ button38;
    private: System::Windows::Forms::Button^ button39;
    private: System::Windows::Forms::Button^ button40;
    private: System::Windows::Forms::Button^ button41;
    private: System::Windows::Forms::Label^ label24;
    private: System::Windows::Forms::Button^ button42;
    private: System::Windows::Forms::Button^ button43;
    private: System::Windows::Forms::Button^ button44;
    private: System::Windows::Forms::Button^ button45;
    private: System::Windows::Forms::Button^ button46;
    private: System::Windows::Forms::Button^ button47;
    private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::Label^ label26;

private: System::Windows::Forms::Button^ button49;
private: System::Windows::Forms::Button^ button50;
private: System::Windows::Forms::Button^ button51;
private: System::Windows::Forms::Button^ button52;
private: System::Windows::Forms::Button^ button53;
private: System::Windows::Forms::Button^ button48;
private: System::Windows::Forms::Button^ button54;
private: System::Windows::Forms::Button^ button55;
private: System::Windows::Forms::Button^ button56;
private: System::Windows::Forms::Button^ button57;
private: System::Windows::Forms::Button^ button58;
private: System::Windows::Forms::Button^ button59;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::Button^ button60;
private: System::Windows::Forms::Button^ button61;
private: System::Windows::Forms::PictureBox^ pictureBox5;
private: System::Windows::Forms::Button^ button62;



    private:


    private: System::ComponentModel::IContainer^ components;


    protected:

    protected:
    protected:

    protected:


    protected:

    private:


#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->components = (gcnew System::ComponentModel::Container());
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->ofd1 = (gcnew System::Windows::Forms::OpenFileDialog());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->button6 = (gcnew System::Windows::Forms::Button());
            this->button7 = (gcnew System::Windows::Forms::Button());
            this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
            this->button8 = (gcnew System::Windows::Forms::Button());
            this->button9 = (gcnew System::Windows::Forms::Button());
            this->button10 = (gcnew System::Windows::Forms::Button());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->button11 = (gcnew System::Windows::Forms::Button());
            this->button12 = (gcnew System::Windows::Forms::Button());
            this->button13 = (gcnew System::Windows::Forms::Button());
            this->button14 = (gcnew System::Windows::Forms::Button());
            this->button15 = (gcnew System::Windows::Forms::Button());
            this->button17 = (gcnew System::Windows::Forms::Button());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->button16 = (gcnew System::Windows::Forms::Button());
            this->button18 = (gcnew System::Windows::Forms::Button());
            this->button19 = (gcnew System::Windows::Forms::Button());
            this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
            this->button20 = (gcnew System::Windows::Forms::Button());
            this->button21 = (gcnew System::Windows::Forms::Button());
            this->button22 = (gcnew System::Windows::Forms::Button());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->button23 = (gcnew System::Windows::Forms::Button());
            this->button24 = (gcnew System::Windows::Forms::Button());
            this->button25 = (gcnew System::Windows::Forms::Button());
            this->button26 = (gcnew System::Windows::Forms::Button());
            this->trackBar2 = (gcnew System::Windows::Forms::TrackBar());
            this->button27 = (gcnew System::Windows::Forms::Button());
            this->button28 = (gcnew System::Windows::Forms::Button());
            this->button29 = (gcnew System::Windows::Forms::Button());
            this->button30 = (gcnew System::Windows::Forms::Button());
            this->button31 = (gcnew System::Windows::Forms::Button());
            this->textBox4 = (gcnew System::Windows::Forms::TextBox());
            this->label16 = (gcnew System::Windows::Forms::Label());
            this->textBox5 = (gcnew System::Windows::Forms::TextBox());
            this->label17 = (gcnew System::Windows::Forms::Label());
            this->textBox6 = (gcnew System::Windows::Forms::TextBox());
            this->textBox7 = (gcnew System::Windows::Forms::TextBox());
            this->label18 = (gcnew System::Windows::Forms::Label());
            this->label19 = (gcnew System::Windows::Forms::Label());
            this->label21 = (gcnew System::Windows::Forms::Label());
            this->label22 = (gcnew System::Windows::Forms::Label());
            this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
            this->label20 = (gcnew System::Windows::Forms::Label());
            this->button32 = (gcnew System::Windows::Forms::Button());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->button33 = (gcnew System::Windows::Forms::Button());
            this->button34 = (gcnew System::Windows::Forms::Button());
            this->button35 = (gcnew System::Windows::Forms::Button());
            this->button36 = (gcnew System::Windows::Forms::Button());
            this->label23 = (gcnew System::Windows::Forms::Label());
            this->button37 = (gcnew System::Windows::Forms::Button());
            this->button38 = (gcnew System::Windows::Forms::Button());
            this->button39 = (gcnew System::Windows::Forms::Button());
            this->button40 = (gcnew System::Windows::Forms::Button());
            this->button41 = (gcnew System::Windows::Forms::Button());
            this->label24 = (gcnew System::Windows::Forms::Label());
            this->button42 = (gcnew System::Windows::Forms::Button());
            this->button43 = (gcnew System::Windows::Forms::Button());
            this->button44 = (gcnew System::Windows::Forms::Button());
            this->button45 = (gcnew System::Windows::Forms::Button());
            this->button46 = (gcnew System::Windows::Forms::Button());
            this->button47 = (gcnew System::Windows::Forms::Button());
            this->label25 = (gcnew System::Windows::Forms::Label());
            this->label26 = (gcnew System::Windows::Forms::Label());
            this->button49 = (gcnew System::Windows::Forms::Button());
            this->button50 = (gcnew System::Windows::Forms::Button());
            this->button51 = (gcnew System::Windows::Forms::Button());
            this->button52 = (gcnew System::Windows::Forms::Button());
            this->button53 = (gcnew System::Windows::Forms::Button());
            this->button48 = (gcnew System::Windows::Forms::Button());
            this->button54 = (gcnew System::Windows::Forms::Button());
            this->button55 = (gcnew System::Windows::Forms::Button());
            this->button56 = (gcnew System::Windows::Forms::Button());
            this->button57 = (gcnew System::Windows::Forms::Button());
            this->button58 = (gcnew System::Windows::Forms::Button());
            this->button59 = (gcnew System::Windows::Forms::Button());
            this->label27 = (gcnew System::Windows::Forms::Label());
            this->button60 = (gcnew System::Windows::Forms::Button());
            this->button61 = (gcnew System::Windows::Forms::Button());
            this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
            this->button62 = (gcnew System::Windows::Forms::Button());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
            this->SuspendLayout();
            // 
            // pictureBox1
            // 
            this->pictureBox1->Location = System::Drawing::Point(13, 210);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(224, 230);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox1->TabIndex = 0;
            this->pictureBox1->TabStop = false;
            // 
            // ofd1
            // 
            this->ofd1->Filter = L"JPEG|*.jpg|All Files|*.*";
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::Color::Transparent;
            this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button1->FlatAppearance->BorderSize = 0;
            this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
            this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button1->Font = (gcnew System::Drawing::Font(L"Rigid Display Medium", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->Location = System::Drawing::Point(952, 1);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(105, 45);
            this->button1->TabIndex = 1;
            this->button1->Text = L"Clear";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
            // 
            // button2
            // 
            this->button2->BackColor = System::Drawing::Color::Transparent;
            this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button2->FlatAppearance->BorderSize = 0;
            this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
            this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button2->Font = (gcnew System::Drawing::Font(L"Rigid Display Medium", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button2->Location = System::Drawing::Point(1095, 3);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(106, 39);
            this->button2->TabIndex = 2;
            this->button2->Text = L"Close";
            this->button2->UseVisualStyleBackColor = false;
            this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
            // 
            // button3
            // 
            this->button3->BackColor = System::Drawing::Color::Transparent;
            this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button3->FlatAppearance->BorderColor = System::Drawing::Color::Black;
            this->button3->FlatAppearance->BorderSize = 0;
            this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
            this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button3->Font = (gcnew System::Drawing::Font(L"Rigid Display Medium", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button3->ForeColor = System::Drawing::Color::Black;
            this->button3->Location = System::Drawing::Point(1239, 3);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(92, 41);
            this->button3->TabIndex = 3;
            this->button3->Text = L"Load";
            this->button3->UseVisualStyleBackColor = false;
            this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
            // 
            // contextMenuStrip1
            // 
            this->contextMenuStrip1->Name = L"contextMenuStrip1";
            this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Rigid Display Medium", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::Color::Red;
            this->label1->Location = System::Drawing::Point(15, 172);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(120, 36);
            this->label1->TabIndex = 6;
            this->label1->Text = L"Before";
            // 
            // pictureBox2
            // 
            this->pictureBox2->Location = System::Drawing::Point(266, 210);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(224, 230);
            this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox2->TabIndex = 7;
            this->pictureBox2->TabStop = false;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Rigid Display Medium", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label2->ForeColor = System::Drawing::Color::Red;
            this->label2->Location = System::Drawing::Point(260, 172);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(105, 36);
            this->label2->TabIndex = 8;
            this->label2->Text = L"After";
            // 
            // button4
            // 
            this->button4->BackColor = System::Drawing::Color::Transparent;
            this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button4->FlatAppearance->BorderSize = 0;
            this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
            this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button4->Font = (gcnew System::Drawing::Font(L"Rigid Display Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button4->Location = System::Drawing::Point(1189, 90);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(142, 35);
            this->button4->TabIndex = 9;
            this->button4->Text = L"Gray Scale";
            this->button4->UseVisualStyleBackColor = false;
            this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
            // 
            // button5
            // 
            this->button5->BackColor = System::Drawing::Color::Transparent;
            this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button5->FlatAppearance->BorderSize = 0;
            this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
            this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button5->Font = (gcnew System::Drawing::Font(L"Rigid Display Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button5->Location = System::Drawing::Point(952, 92);
            this->button5->Name = L"button5";
            this->button5->Size = System::Drawing::Size(210, 33);
            this->button5->TabIndex = 11;
            this->button5->Text = L"Black and white";
            this->button5->UseVisualStyleBackColor = false;
            this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
            // 
            // button6
            // 
            this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button6->FlatAppearance->BorderSize = 0;
            this->button6->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
            this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button6->Font = (gcnew System::Drawing::Font(L"Rigid Display Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button6->Location = System::Drawing::Point(1178, 122);
            this->button6->Name = L"button6";
            this->button6->Size = System::Drawing::Size(163, 30);
            this->button6->TabIndex = 12;
            this->button6->Text = L"Flip vertical";
            this->button6->UseVisualStyleBackColor = true;
            this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
            // 
            // button7
            // 
            this->button7->AccessibleName = L"haha";
            this->button7->BackColor = System::Drawing::Color::Transparent;
            this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button7->FlatAppearance->BorderSize = 0;
            this->button7->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button7->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
            this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button7->Font = (gcnew System::Drawing::Font(L"Rigid Display Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button7->Location = System::Drawing::Point(952, 124);
            this->button7->Name = L"button7";
            this->button7->Size = System::Drawing::Size(210, 31);
            this->button7->TabIndex = 13;
            this->button7->Text = L"Flip horizontal";
            this->button7->UseVisualStyleBackColor = false;
            this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
            // 
            // trackBar1
            // 
            this->trackBar1->AccessibleDescription = L"y33";
            this->trackBar1->AccessibleName = L"y33";
            this->trackBar1->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
            this->trackBar1->Cursor = System::Windows::Forms::Cursors::Hand;
            this->trackBar1->Location = System::Drawing::Point(496, 210);
            this->trackBar1->Maximum = 100;
            this->trackBar1->Minimum = -100;
            this->trackBar1->Name = L"trackBar1";
            this->trackBar1->Size = System::Drawing::Size(183, 45);
            this->trackBar1->TabIndex = 14;
            this->trackBar1->Tag = L"y33";
            this->trackBar1->Visible = false;
            // 
            // button8
            // 
            this->button8->AccessibleName = L"haha";
            this->button8->BackColor = System::Drawing::Color::Transparent;
            this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button8->FlatAppearance->BorderSize = 0;
            this->button8->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button8->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
            this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button8->Font = (gcnew System::Drawing::Font(L"Rigid Display Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button8->Location = System::Drawing::Point(952, 158);
            this->button8->Name = L"button8";
            this->button8->Size = System::Drawing::Size(194, 34);
            this->button8->TabIndex = 15;
            this->button8->Text = L"Image Brightnes";
            this->button8->UseVisualStyleBackColor = false;
            this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
            // 
            // button9
            // 
            this->button9->AccessibleDescription = L"y33";
            this->button9->AccessibleName = L"y33";
            this->button9->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
            this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button9->FlatAppearance->BorderSize = 0;
            this->button9->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button9->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
            this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button9->Font = (gcnew System::Drawing::Font(L"Rigid Display Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button9->Location = System::Drawing::Point(520, 261);
            this->button9->Name = L"button9";
            this->button9->Size = System::Drawing::Size(132, 49);
            this->button9->TabIndex = 16;
            this->button9->Tag = L"y33";
            this->button9->Text = L"Apply";
            this->button9->UseVisualStyleBackColor = true;
            this->button9->Visible = false;
            this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
            // 
            // button10
            // 
            this->button10->AccessibleName = L"haha";
            this->button10->BackColor = System::Drawing::Color::Transparent;
            this->button10->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button10->FlatAppearance->BorderSize = 0;
            this->button10->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button10->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
            this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button10->Font = (gcnew System::Drawing::Font(L"Rigid Display Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button10->Location = System::Drawing::Point(1168, 160);
            this->button10->Name = L"button10";
            this->button10->Size = System::Drawing::Size(173, 31);
            this->button10->TabIndex = 17;
            this->button10->Text = L"Detect edges";
            this->button10->UseVisualStyleBackColor = false;
            this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->BackColor = System::Drawing::Color::Transparent;
            this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.25F));
            this->label4->ForeColor = System::Drawing::Color::Red;
            this->label4->Location = System::Drawing::Point(1207, -1);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(26, 39);
            this->label4->TabIndex = 18;
            this->label4->Text = L"|";
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->BackColor = System::Drawing::Color::Transparent;
            this->label5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.25F));
            this->label5->ForeColor = System::Drawing::Color::Red;
            this->label5->Location = System::Drawing::Point(1063, -1);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(26, 39);
            this->label5->TabIndex = 19;
            this->label5->Text = L"|";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Font = (gcnew System::Drawing::Font(L"Rigid Display Medium", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->Location = System::Drawing::Point(48, 8);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(80, 31);
            this->label6->TabIndex = 20;
            this->label6->Text = L"Baby";
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->BackColor = System::Drawing::Color::Transparent;
            this->label7->Font = (gcnew System::Drawing::Font(L"Rigid Display Medium", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label7->ForeColor = System::Drawing::Color::Red;
            this->label7->Location = System::Drawing::Point(122, 1);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(212, 40);
            this->label7->TabIndex = 21;
            this->label7->Text = L"PHOTOSHOP";
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->BackColor = System::Drawing::Color::Transparent;
            this->label8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->label8->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->label8->Location = System::Drawing::Point(-10, 36);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(1755, 17);
            this->label8->TabIndex = 22;
            this->label8->Text = resources->GetString(L"label8.Text");
            this->label8->UseCompatibleTextRendering = true;
            // 
            // button11
            // 
            this->button11->AccessibleName = L"haha";
            this->button11->BackColor = System::Drawing::Color::Transparent;
            this->button11->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button11->FlatAppearance->BorderSize = 0;
            this->button11->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button11->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
            this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button11->Font = (gcnew System::Drawing::Font(L"Rigid Display Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button11->Location = System::Drawing::Point(973, 193);
            this->button11->Name = L"button11";
            this->button11->Size = System::Drawing::Size(148, 34);
            this->button11->TabIndex = 23;
            this->button11->Text = L"Invert image";
            this->button11->UseVisualStyleBackColor = false;
            this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
            // 
            // button12
            // 
            this->button12->AccessibleName = L"haha";
            this->button12->BackColor = System::Drawing::Color::Transparent;
            this->button12->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button12->FlatAppearance->BorderSize = 0;
            this->button12->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button12->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
            this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button12->Font = (gcnew System::Drawing::Font(L"Rigid Display Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button12->Location = System::Drawing::Point(1183, 197);
            this->button12->Name = L"button12";
            this->button12->Size = System::Drawing::Size(148, 27);
            this->button12->TabIndex = 24;
            this->button12->Text = L"Sunlight";
            this->button12->UseVisualStyleBackColor = false;
            this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
            // 
            // button13
            // 
            this->button13->AccessibleName = L"haha";
            this->button13->BackColor = System::Drawing::Color::Transparent;
            this->button13->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button13->FlatAppearance->BorderSize = 0;
            this->button13->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button13->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
            this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button13->Font = (gcnew System::Drawing::Font(L"Rigid Display Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button13->Location = System::Drawing::Point(973, 233);
            this->button13->Name = L"button13";
            this->button13->Size = System::Drawing::Size(148, 34);
            this->button13->TabIndex = 25;
            this->button13->Text = L"Skew image";
            this->button13->UseVisualStyleBackColor = false;
            this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
            // 
            // button14
            // 
            this->button14->AccessibleName = L"haha";
            this->button14->BackColor = System::Drawing::Color::Transparent;
            this->button14->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button14->FlatAppearance->BorderSize = 0;
            this->button14->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button14->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
            this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button14->Font = (gcnew System::Drawing::Font(L"Rigid Display Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button14->Location = System::Drawing::Point(1183, 230);
            this->button14->Name = L"button14";
            this->button14->Size = System::Drawing::Size(148, 34);
            this->button14->TabIndex = 26;
            this->button14->Text = L"Purple";
            this->button14->UseVisualStyleBackColor = false;
            this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
            // 
            // button15
            // 
            this->button15->AccessibleName = L"haha";
            this->button15->BackColor = System::Drawing::Color::Transparent;
            this->button15->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button15->FlatAppearance->BorderSize = 0;
            this->button15->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button15->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
            this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button15->Font = (gcnew System::Drawing::Font(L"Rigid Display Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button15->Location = System::Drawing::Point(995, 273);
            this->button15->Name = L"button15";
            this->button15->Size = System::Drawing::Size(100, 28);
            this->button15->TabIndex = 27;
            this->button15->Text = L"Resize";
            this->button15->UseVisualStyleBackColor = false;
            this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
            // 
            // button17
            // 
            this->button17->AccessibleDescription = L"y33";
            this->button17->AccessibleName = L"y33";
            this->button17->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
            this->button17->BackColor = System::Drawing::Color::Transparent;
            this->button17->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button17->FlatAppearance->BorderSize = 0;
            this->button17->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button17->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
            this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button17->Font = (gcnew System::Drawing::Font(L"Rigid Display Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button17->Location = System::Drawing::Point(520, 268);
            this->button17->Name = L"button17";
            this->button17->Size = System::Drawing::Size(148, 34);
            this->button17->TabIndex = 29;
            this->button17->Tag = L"y33";
            this->button17->Text = L"Apply";
            this->button17->UseVisualStyleBackColor = false;
            this->button17->Visible = false;
            this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
            // 
            // label9
            // 
            this->label9->AccessibleDescription = L"y33";
            this->label9->AccessibleName = L"y33";
            this->label9->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
            this->label9->AutoSize = true;
            this->label9->Location = System::Drawing::Point(507, 210);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(38, 13);
            this->label9->TabIndex = 30;
            this->label9->Tag = L"y33";
            this->label9->Text = L"Width:";
            this->label9->Visible = false;
            // 
            // textBox1
            // 
            this->textBox1->AccessibleDescription = L"y33";
            this->textBox1->AccessibleName = L"y33";
            this->textBox1->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
            this->textBox1->Location = System::Drawing::Point(551, 210);
            this->textBox1->Multiline = true;
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(98, 16);
            this->textBox1->TabIndex = 31;
            this->textBox1->Tag = L"y33";
            this->textBox1->Visible = false;
            // 
            // label10
            // 
            this->label10->AccessibleDescription = L"y33";
            this->label10->AccessibleName = L"y33";
            this->label10->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
            this->label10->AutoSize = true;
            this->label10->Location = System::Drawing::Point(503, 234);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(44, 13);
            this->label10->TabIndex = 32;
            this->label10->Tag = L"y33";
            this->label10->Text = L"Height: ";
            this->label10->Visible = false;
            // 
            // textBox2
            // 
            this->textBox2->AccessibleDescription = L"y33";
            this->textBox2->AccessibleName = L"y33";
            this->textBox2->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
            this->textBox2->Location = System::Drawing::Point(551, 232);
            this->textBox2->Multiline = true;
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(98, 16);
            this->textBox2->TabIndex = 33;
            this->textBox2->Tag = L"y33";
            this->textBox2->Visible = false;
            // 
            // label11
            // 
            this->label11->BackColor = System::Drawing::Color::Silver;
            this->label11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
            this->label11->Location = System::Drawing::Point(13, 210);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(224, 230);
            this->label11->TabIndex = 34;
            this->label11->Text = L"Load any image!";
            this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label12
            // 
            this->label12->BackColor = System::Drawing::Color::Silver;
            this->label12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
            this->label12->Location = System::Drawing::Point(267, 211);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(224, 230);
            this->label12->TabIndex = 35;
            this->label12->Text = L"Apply a filter to see the result";
            this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // textBox3
            // 
            this->textBox3->AccessibleDescription = L"y33";
            this->textBox3->AccessibleName = L"y33";
            this->textBox3->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
            this->textBox3->Location = System::Drawing::Point(551, 232);
            this->textBox3->Multiline = true;
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(98, 16);
            this->textBox3->TabIndex = 36;
            this->textBox3->Tag = L"y33";
            this->textBox3->Visible = false;
            // 
            // label13
            // 
            this->label13->AccessibleDescription = L"y33";
            this->label13->AccessibleName = L"y33";
            this->label13->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
            this->label13->AutoSize = true;
            this->label13->Location = System::Drawing::Point(507, 234);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(37, 13);
            this->label13->TabIndex = 37;
            this->label13->Tag = L"y33";
            this->label13->Text = L"Angel:";
            this->label13->Visible = false;
            // 
            // button16
            // 
            this->button16->AccessibleDescription = L"y33";
            this->button16->AccessibleName = L"y33";
            this->button16->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
            this->button16->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button16->FlatAppearance->BorderSize = 0;
            this->button16->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button16->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
            this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button16->Font = (gcnew System::Drawing::Font(L"Rigid Display Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button16->Location = System::Drawing::Point(536, 261);
            this->button16->Name = L"button16";
            this->button16->Size = System::Drawing::Size(132, 49);
            this->button16->TabIndex = 38;
            this->button16->Tag = L"y33";
            this->button16->Text = L"Apply";
            this->button16->UseVisualStyleBackColor = true;
            this->button16->Visible = false;
            this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
            // 
            // button18
            // 
            this->button18->AccessibleName = L"haha";
            this->button18->BackColor = System::Drawing::Color::Transparent;
            this->button18->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button18->FlatAppearance->BorderSize = 0;
            this->button18->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button18->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
            this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button18->Font = (gcnew System::Drawing::Font(L"Rigid Display Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button18->Location = System::Drawing::Point(1203, 273);
            this->button18->Name = L"button18";
            this->button18->Size = System::Drawing::Size(100, 28);
            this->button18->TabIndex = 39;
            this->button18->Text = L"Merge";
            this->button18->UseVisualStyleBackColor = false;
            this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
            // 
            // button19
            // 
            this->button19->AccessibleDescription = L"y33";
            this->button19->AccessibleName = L"y33";
            this->button19->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
            this->button19->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button19->FlatAppearance->BorderSize = 0;
            this->button19->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button19->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
            this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button19->Font = (gcnew System::Drawing::Font(L"Rigid Display Medium", 8, System::Drawing::FontStyle::Bold));
            this->button19->Location = System::Drawing::Point(520, 199);
            this->button19->Name = L"button19";
            this->button19->Size = System::Drawing::Size(132, 49);
            this->button19->TabIndex = 40;
            this->button19->Tag = L"y33";
            this->button19->Text = L"load another image";
            this->button19->UseVisualStyleBackColor = true;
            this->button19->Visible = false;
            this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
            // 
            // pictureBox3
            // 
            this->pictureBox3->AccessibleDescription = L"y33";
            this->pictureBox3->AccessibleName = L"y33";
            this->pictureBox3->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
            this->pictureBox3->Location = System::Drawing::Point(525, 322);
            this->pictureBox3->Name = L"pictureBox3";
            this->pictureBox3->Size = System::Drawing::Size(127, 119);
            this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox3->TabIndex = 41;
            this->pictureBox3->TabStop = false;
            this->pictureBox3->Tag = L"y33";
            // 
            // button20
            // 
            this->button20->AccessibleDescription = L"y33";
            this->button20->AccessibleName = L"y33";
            this->button20->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
            this->button20->BackColor = System::Drawing::Color::Transparent;
            this->button20->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button20->FlatAppearance->BorderSize = 0;
            this->button20->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button20->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
            this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button20->Font = (gcnew System::Drawing::Font(L"Rigid Display Medium", 8, System::Drawing::FontStyle::Bold));
            this->button20->Location = System::Drawing::Point(505, 261);
            this->button20->Name = L"button20";
            this->button20->Size = System::Drawing::Size(163, 28);
            this->button20->TabIndex = 42;
            this->button20->Tag = L"y33";
            this->button20->Text = L"Merge common area";
            this->button20->UseVisualStyleBackColor = false;
            this->button20->Visible = false;
            this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
            // 
            // button21
            // 
            this->button21->AccessibleDescription = L"y33";
            this->button21->AccessibleName = L"y33";
            this->button21->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
            this->button21->BackColor = System::Drawing::Color::Transparent;
            this->button21->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button21->FlatAppearance->BorderSize = 0;
            this->button21->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button21->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
            this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button21->Font = (gcnew System::Drawing::Font(L"Rigid Display Medium", 8, System::Drawing::FontStyle::Bold));
            this->button21->Location = System::Drawing::Point(520, 288);
            this->button21->Name = L"button21";
            this->button21->Size = System::Drawing::Size(143, 28);
            this->button21->TabIndex = 43;
            this->button21->Tag = L"y33";
            this->button21->Text = L"Merge Full Image";
            this->button21->UseVisualStyleBackColor = false;
            this->button21->Visible = false;
            this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
            // 
            // button22
            // 
            this->button22->AccessibleName = L"haha";
            this->button22->BackColor = System::Drawing::Color::Transparent;
            this->button22->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button22->FlatAppearance->BorderSize = 0;
            this->button22->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button22->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
            this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button22->Font = (gcnew System::Drawing::Font(L"Rigid Display Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button22->Location = System::Drawing::Point(963, 304);
            this->button22->Name = L"button22";
            this->button22->Size = System::Drawing::Size(167, 28);
            this->button22->TabIndex = 44;
            this->button22->Text = L"old tv";
            this->button22->UseVisualStyleBackColor = false;
            this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
            // 
            // label14
            // 
            this->label14->AutoSize = true;
            this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
            this->label14->ForeColor = System::Drawing::Color::DimGray;
            this->label14->Location = System::Drawing::Point(18, 108);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(129, 17);
            this->label14->TabIndex = 45;
            this->label14->Text = L"source image path:";
            this->label14->Visible = false;
            // 
            // label15
            // 
            this->label15->AutoSize = true;
            this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
            this->label15->ForeColor = System::Drawing::Color::DimGray;
            this->label15->Location = System::Drawing::Point(147, 108);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(0, 17);
            this->label15->TabIndex = 46;
            // 
            // button23
            // 
            this->button23->AccessibleName = L"haha";
            this->button23->BackColor = System::Drawing::Color::Transparent;
            this->button23->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button23->FlatAppearance->BorderSize = 0;
            this->button23->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button23->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
            this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button23->Font = (gcnew System::Drawing::Font(L"Rigid Display Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button23->Location = System::Drawing::Point(1164, 307);
            this->button23->Name = L"button23";
            this->button23->Size = System::Drawing::Size(167, 28);
            this->button23->TabIndex = 47;
            this->button23->Text = L"Rotate";
            this->button23->UseVisualStyleBackColor = false;
            this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
            // 
            // button24
            // 
            this->button24->AccessibleDescription = L"y33";
            this->button24->AccessibleName = L"y33";
            this->button24->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
            this->button24->BackColor = System::Drawing::Color::Transparent;
            this->button24->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button24->FlatAppearance->BorderSize = 0;
            this->button24->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button24->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
            this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button24->Font = (gcnew System::Drawing::Font(L"Rigid Display Medium", 8, System::Drawing::FontStyle::Bold));
            this->button24->Location = System::Drawing::Point(520, 206);
            this->button24->Name = L"button24";
            this->button24->Size = System::Drawing::Size(129, 28);
            this->button24->TabIndex = 48;
            this->button24->Tag = L"y33";
            this->button24->Text = L"Rotate by 90";
            this->button24->UseVisualStyleBackColor = false;
            this->button24->Visible = false;
            this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
            // 
            // button25
            // 
            this->button25->AccessibleDescription = L"y33";
            this->button25->AccessibleName = L"y33";
            this->button25->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
            this->button25->BackColor = System::Drawing::Color::Transparent;
            this->button25->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button25->FlatAppearance->BorderSize = 0;
            this->button25->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button25->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
            this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button25->Font = (gcnew System::Drawing::Font(L"Rigid Display Medium", 8, System::Drawing::FontStyle::Bold));
            this->button25->Location = System::Drawing::Point(520, 240);
            this->button25->Name = L"button25";
            this->button25->Size = System::Drawing::Size(143, 28);
            this->button25->TabIndex = 49;
            this->button25->Tag = L"y33";
            this->button25->Text = L"Rotate by180";
            this->button25->UseVisualStyleBackColor = false;
            this->button25->Visible = false;
            this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
            // 
            // button26
            // 
            this->button26->AccessibleDescription = L"y33";
            this->button26->AccessibleName = L"y33";
            this->button26->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
            this->button26->BackColor = System::Drawing::Color::Transparent;
            this->button26->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button26->FlatAppearance->BorderSize = 0;
            this->button26->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button26->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
            this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button26->Font = (gcnew System::Drawing::Font(L"Rigid Display Medium", 8, System::Drawing::FontStyle::Bold));
            this->button26->Location = System::Drawing::Point(515, 273);
            this->button26->Name = L"button26";
            this->button26->Size = System::Drawing::Size(153, 28);
            this->button26->TabIndex = 50;
            this->button26->Tag = L"y33";
            this->button26->Text = L"Rotate by 270\r\n";
            this->button26->UseVisualStyleBackColor = false;
            this->button26->Visible = false;
            this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
            // 
            // trackBar2
            // 
            this->trackBar2->AccessibleDescription = L"y33";
            this->trackBar2->AccessibleName = L"y33";
            this->trackBar2->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
            this->trackBar2->Location = System::Drawing::Point(525, 210);
            this->trackBar2->Maximum = 4;
            this->trackBar2->Minimum = 1;
            this->trackBar2->Name = L"trackBar2";
            this->trackBar2->Size = System::Drawing::Size(104, 45);
            this->trackBar2->TabIndex = 51;
            this->trackBar2->Tag = L"y33";
            this->trackBar2->Value = 1;
            this->trackBar2->Visible = false;
            // 
            // button27
            // 
            this->button27->AccessibleDescription = L"y33";
            this->button27->AccessibleName = L"y33";
            this->button27->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
            this->button27->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button27->FlatAppearance->BorderSize = 0;
            this->button27->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button27->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
            this->button27->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button27->Font = (gcnew System::Drawing::Font(L"Rigid Display Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button27->Location = System::Drawing::Point(520, 281);
            this->button27->Name = L"button27";
            this->button27->Size = System::Drawing::Size(132, 49);
            this->button27->TabIndex = 52;
            this->button27->Tag = L"y33";
            this->button27->Text = L"Apply";
            this->button27->UseVisualStyleBackColor = true;
            this->button27->Visible = false;
            this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
            // 
            // button28
            // 
            this->button28->AccessibleName = L"haha";
            this->button28->BackColor = System::Drawing::Color::Transparent;
            this->button28->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button28->FlatAppearance->BorderSize = 0;
            this->button28->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button28->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
            this->button28->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button28->Font = (gcnew System::Drawing::Font(L"Rigid Display Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button28->Location = System::Drawing::Point(963, 338);
            this->button28->Name = L"button28";
            this->button28->Size = System::Drawing::Size(167, 28);
            this->button28->TabIndex = 53;
            this->button28->Text = L"Blur";
            this->button28->UseVisualStyleBackColor = false;
            this->button28->Click += gcnew System::EventHandler(this, &MyForm::button28_Click);
            // 
            // button29
            // 
            this->button29->AccessibleName = L"haha";
            this->button29->BackColor = System::Drawing::Color::Transparent;
            this->button29->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button29->FlatAppearance->BorderSize = 0;
            this->button29->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button29->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
            this->button29->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button29->Font = (gcnew System::Drawing::Font(L"Rigid Display Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button29->Location = System::Drawing::Point(1164, 341);
            this->button29->Name = L"button29";
            this->button29->Size = System::Drawing::Size(167, 28);
            this->button29->TabIndex = 54;
            this->button29->Text = L"Infrared";
            this->button29->UseVisualStyleBackColor = false;
            this->button29->Click += gcnew System::EventHandler(this, &MyForm::button29_Click);
            // 
            // button30
            // 
            this->button30->AccessibleName = L"haha";
            this->button30->BackColor = System::Drawing::Color::Transparent;
            this->button30->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button30->FlatAppearance->BorderSize = 0;
            this->button30->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button30->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
            this->button30->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button30->Font = (gcnew System::Drawing::Font(L"Rigid Display Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button30->Location = System::Drawing::Point(963, 372);
            this->button30->Name = L"button30";
            this->button30->Size = System::Drawing::Size(167, 28);
            this->button30->TabIndex = 55;
            this->button30->Text = L"Crop";
            this->button30->UseVisualStyleBackColor = false;
            this->button30->Click += gcnew System::EventHandler(this, &MyForm::button30_Click);
            // 
            // button31
            // 
            this->button31->AccessibleDescription = L"y33";
            this->button31->AccessibleName = L"y33";
            this->button31->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
            this->button31->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button31->FlatAppearance->BorderSize = 0;
            this->button31->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button31->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
            this->button31->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button31->Font = (gcnew System::Drawing::Font(L"Rigid Display Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button31->Location = System::Drawing::Point(533, 300);
            this->button31->Name = L"button31";
            this->button31->Size = System::Drawing::Size(132, 49);
            this->button31->TabIndex = 60;
            this->button31->Tag = L"y33";
            this->button31->Text = L"Apply";
            this->button31->UseVisualStyleBackColor = true;
            this->button31->Visible = false;
            this->button31->Click += gcnew System::EventHandler(this, &MyForm::button31_Click);
            // 
            // textBox4
            // 
            this->textBox4->AccessibleDescription = L"y33";
            this->textBox4->AccessibleName = L"y33";
            this->textBox4->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
            this->textBox4->Location = System::Drawing::Point(553, 272);
            this->textBox4->Multiline = true;
            this->textBox4->Name = L"textBox4";
            this->textBox4->Size = System::Drawing::Size(98, 16);
            this->textBox4->TabIndex = 59;
            this->textBox4->Tag = L"y33";
            this->textBox4->Visible = false;
            // 
            // label16
            // 
            this->label16->AccessibleDescription = L"y33";
            this->label16->AccessibleName = L"y33";
            this->label16->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
            this->label16->AutoSize = true;
            this->label16->Location = System::Drawing::Point(508, 272);
            this->label16->Name = L"label16";
            this->label16->Size = System::Drawing::Size(44, 13);
            this->label16->TabIndex = 58;
            this->label16->Tag = L"y33";
            this->label16->Text = L"Height: ";
            this->label16->Visible = false;
            // 
            // textBox5
            // 
            this->textBox5->AccessibleDescription = L"y33";
            this->textBox5->AccessibleName = L"y33";
            this->textBox5->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
            this->textBox5->Location = System::Drawing::Point(553, 245);
            this->textBox5->Multiline = true;
            this->textBox5->Name = L"textBox5";
            this->textBox5->Size = System::Drawing::Size(98, 16);
            this->textBox5->TabIndex = 57;
            this->textBox5->Tag = L"y33";
            this->textBox5->Visible = false;
            // 
            // label17
            // 
            this->label17->AccessibleDescription = L"y33";
            this->label17->AccessibleName = L"y33";
            this->label17->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
            this->label17->AutoSize = true;
            this->label17->Location = System::Drawing::Point(508, 248);
            this->label17->Name = L"label17";
            this->label17->Size = System::Drawing::Size(38, 13);
            this->label17->TabIndex = 56;
            this->label17->Tag = L"y33";
            this->label17->Text = L"Width:";
            this->label17->Visible = false;
            // 
            // textBox6
            // 
            this->textBox6->AccessibleDescription = L"y33";
            this->textBox6->AccessibleName = L"y33";
            this->textBox6->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
            this->textBox6->Location = System::Drawing::Point(553, 173);
            this->textBox6->Multiline = true;
            this->textBox6->Name = L"textBox6";
            this->textBox6->Size = System::Drawing::Size(98, 16);
            this->textBox6->TabIndex = 61;
            this->textBox6->Tag = L"y33";
            this->textBox6->Visible = false;
            // 
            // textBox7
            // 
            this->textBox7->AccessibleDescription = L"y33";
            this->textBox7->AccessibleName = L"y33";
            this->textBox7->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
            this->textBox7->Location = System::Drawing::Point(553, 195);
            this->textBox7->Multiline = true;
            this->textBox7->Name = L"textBox7";
            this->textBox7->Size = System::Drawing::Size(98, 16);
            this->textBox7->TabIndex = 62;
            this->textBox7->Tag = L"y33";
            this->textBox7->Visible = false;
            // 
            // label18
            // 
            this->label18->AccessibleDescription = L"y33";
            this->label18->AccessibleName = L"y33";
            this->label18->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
            this->label18->AutoSize = true;
            this->label18->Location = System::Drawing::Point(509, 173);
            this->label18->Name = L"label18";
            this->label18->Size = System::Drawing::Size(38, 13);
            this->label18->TabIndex = 63;
            this->label18->Tag = L"y33";
            this->label18->Text = L"Width:";
            this->label18->Visible = false;
            // 
            // label19
            // 
            this->label19->AccessibleDescription = L"y33";
            this->label19->AccessibleName = L"y33";
            this->label19->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
            this->label19->AutoSize = true;
            this->label19->Location = System::Drawing::Point(503, 195);
            this->label19->Name = L"label19";
            this->label19->Size = System::Drawing::Size(44, 13);
            this->label19->TabIndex = 64;
            this->label19->Tag = L"y33";
            this->label19->Text = L"Height: ";
            this->label19->Visible = false;
            // 
            // label21
            // 
            this->label21->AccessibleDescription = L"y33";
            this->label21->AccessibleName = L"y33";
            this->label21->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
            this->label21->AutoSize = true;
            this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label21->Location = System::Drawing::Point(509, 141);
            this->label21->Name = L"label21";
            this->label21->Size = System::Drawing::Size(178, 16);
            this->label21->TabIndex = 66;
            this->label21->Tag = L"y33";
            this->label21->Text = L"The dimension of new image";
            this->label21->Visible = false;
            // 
            // label22
            // 
            this->label22->AccessibleDescription = L"y33";
            this->label22->AccessibleName = L"y33";
            this->label22->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
            this->label22->AutoSize = true;
            this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label22->Location = System::Drawing::Point(509, 221);
            this->label22->Name = L"label22";
            this->label22->Size = System::Drawing::Size(109, 16);
            this->label22->TabIndex = 67;
            this->label22->Tag = L"y33";
            this->label22->Text = L"The starting point";
            this->label22->Visible = false;
            // 
            // pictureBox4
            // 
            this->pictureBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
            this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
            this->pictureBox4->Location = System::Drawing::Point(21, 3);
            this->pictureBox4->Name = L"pictureBox4";
            this->pictureBox4->Size = System::Drawing::Size(29, 38);
            this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
            this->pictureBox4->TabIndex = 68;
            this->pictureBox4->TabStop = false;
            // 
            // label20
            // 
            this->label20->AutoSize = true;
            this->label20->BackColor = System::Drawing::Color::Transparent;
            this->label20->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.25F));
            this->label20->ForeColor = System::Drawing::Color::Red;
            this->label20->Location = System::Drawing::Point(924, 2);
            this->label20->Name = L"label20";
            this->label20->Size = System::Drawing::Size(26, 39);
            this->label20->TabIndex = 70;
            this->label20->Text = L"|";
            // 
            // button32
            // 
            this->button32->BackColor = System::Drawing::Color::Transparent;
            this->button32->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button32->FlatAppearance->BorderSize = 0;
            this->button32->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button32->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
            this->button32->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button32->Font = (gcnew System::Drawing::Font(L"Rigid Display Medium", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button32->Location = System::Drawing::Point(805, 2);
            this->button32->Name = L"button32";
            this->button32->Size = System::Drawing::Size(113, 36);
            this->button32->TabIndex = 69;
            this->button32->Text = L"save";
            this->button32->UseVisualStyleBackColor = false;
            this->button32->Click += gcnew System::EventHandler(this, &MyForm::button32_Click);
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->ForeColor = System::Drawing::Color::DimGray;
            this->label3->Location = System::Drawing::Point(37, 465);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(0, 16);
            this->label3->TabIndex = 71;
            // 
            // button33
            // 
            this->button33->AccessibleName = L"haha";
            this->button33->BackColor = System::Drawing::Color::Transparent;
            this->button33->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button33->FlatAppearance->BorderSize = 0;
            this->button33->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button33->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
            this->button33->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button33->Font = (gcnew System::Drawing::Font(L"Rigid Display Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button33->Location = System::Drawing::Point(1164, 375);
            this->button33->Name = L"button33";
            this->button33->Size = System::Drawing::Size(167, 28);
            this->button33->TabIndex = 72;
            this->button33->Text = L"Frame";
            this->button33->UseVisualStyleBackColor = false;
            this->button33->Click += gcnew System::EventHandler(this, &MyForm::button33_Click);
            // 
            // button34
            // 
            this->button34->AccessibleDescription = L"y33";
            this->button34->AccessibleName = L"y33";
            this->button34->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
            this->button34->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button34->FlatAppearance->BorderSize = 0;
            this->button34->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button34->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
            this->button34->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button34->Font = (gcnew System::Drawing::Font(L"Rigid Display Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button34->Location = System::Drawing::Point(510, 165);
            this->button34->Name = L"button34";
            this->button34->Size = System::Drawing::Size(132, 49);
            this->button34->TabIndex = 73;
            this->button34->Tag = L"y33";
            this->button34->Text = L"Regular";
            this->button34->UseVisualStyleBackColor = true;
            this->button34->Visible = false;
            this->button34->Click += gcnew System::EventHandler(this, &MyForm::button34_Click);
            // 
            // button35
            // 
            this->button35->AccessibleDescription = L"y33";
            this->button35->AccessibleName = L"y33";
            this->button35->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
            this->button35->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button35->FlatAppearance->BorderSize = 0;
            this->button35->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button35->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
            this->button35->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button35->Font = (gcnew System::Drawing::Font(L"Rigid Display Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button35->Location = System::Drawing::Point(510, 219);
            this->button35->Name = L"button35";
            this->button35->Size = System::Drawing::Size(205, 49);
            this->button35->TabIndex = 74;
            this->button35->Tag = L"y33";
            this->button35->Text = L"Double Regular";
            this->button35->UseVisualStyleBackColor = true;
            this->button35->Visible = false;
            this->button35->Click += gcnew System::EventHandler(this, &MyForm::button35_Click);
            // 
            // button36
            // 
            this->button36->AccessibleDescription = L"y33";
            this->button36->AccessibleName = L"y33";
            this->button36->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
            this->button36->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button36->FlatAppearance->BorderSize = 0;
            this->button36->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button36->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
            this->button36->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button36->Font = (gcnew System::Drawing::Font(L"Rigid Display Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button36->Location = System::Drawing::Point(512, 281);
            this->button36->Name = L"button36";
            this->button36->Size = System::Drawing::Size(117, 49);
            this->button36->TabIndex = 75;
            this->button36->Tag = L"y33";
            this->button36->Text = L"Fancy";
            this->button36->UseVisualStyleBackColor = true;
            this->button36->Visible = false;
            this->button36->Click += gcnew System::EventHandler(this, &MyForm::button36_Click);
            // 
            // label23
            // 
            this->label23->AccessibleDescription = L"y33";
            this->label23->AccessibleName = L"y33";
            this->label23->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
            this->label23->AutoSize = true;
            this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label23->Location = System::Drawing::Point(512, 141);
            this->label23->Name = L"label23";
            this->label23->Size = System::Drawing::Size(120, 16);
            this->label23->TabIndex = 76;
            this->label23->Tag = L"y33";
            this->label23->Text = L"Choose frame type";
            this->label23->Visible = false;
            // 
            // button37
            // 
            this->button37->AccessibleDescription = L"y33";
            this->button37->AccessibleName = L"y33";
            this->button37->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
            this->button37->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button37->FlatAppearance->BorderSize = 0;
            this->button37->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button37->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
            this->button37->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button37->Font = (gcnew System::Drawing::Font(L"Rigid Display Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button37->Location = System::Drawing::Point(518, 157);
            this->button37->Name = L"button37";
            this->button37->Size = System::Drawing::Size(117, 49);
            this->button37->TabIndex = 77;
            this->button37->Tag = L"y33";
            this->button37->Text = L"Red";
            this->button37->UseVisualStyleBackColor = true;
            this->button37->Visible = false;
            this->button37->Click += gcnew System::EventHandler(this, &MyForm::button37_Click);
            // 
            // button38
            // 
            this->button38->AccessibleDescription = L"y33";
            this->button38->AccessibleName = L"y33";
            this->button38->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
            this->button38->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button38->FlatAppearance->BorderSize = 0;
            this->button38->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button38->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
            this->button38->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button38->Font = (gcnew System::Drawing::Font(L"Rigid Display Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button38->Location = System::Drawing::Point(520, 221);
            this->button38->Name = L"button38";
            this->button38->Size = System::Drawing::Size(117, 49);
            this->button38->TabIndex = 78;
            this->button38->Tag = L"y33";
            this->button38->Text = L"Green";
            this->button38->UseVisualStyleBackColor = true;
            this->button38->Visible = false;
            this->button38->Click += gcnew System::EventHandler(this, &MyForm::button38_Click);
            // 
            // button39
            // 
            this->button39->AccessibleDescription = L"y33";
            this->button39->AccessibleName = L"y33";
            this->button39->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
            this->button39->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button39->FlatAppearance->BorderSize = 0;
            this->button39->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button39->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
            this->button39->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button39->Font = (gcnew System::Drawing::Font(L"Rigid Display Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button39->Location = System::Drawing::Point(525, 274);
            this->button39->Name = L"button39";
            this->button39->Size = System::Drawing::Size(117, 49);
            this->button39->TabIndex = 79;
            this->button39->Tag = L"y33";
            this->button39->Text = L"Blue";
            this->button39->UseVisualStyleBackColor = true;
            this->button39->Visible = false;
            this->button39->Click += gcnew System::EventHandler(this, &MyForm::button39_Click);
            // 
            // button40
            // 
            this->button40->AccessibleDescription = L"y33";
            this->button40->AccessibleName = L"y33";
            this->button40->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
            this->button40->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button40->FlatAppearance->BorderSize = 0;
            this->button40->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button40->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
            this->button40->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button40->Font = (gcnew System::Drawing::Font(L"Rigid Display Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button40->Location = System::Drawing::Point(525, 331);
            this->button40->Name = L"button40";
            this->button40->Size = System::Drawing::Size(117, 49);
            this->button40->TabIndex = 80;
            this->button40->Tag = L"y33";
            this->button40->Text = L"Yellow";
            this->button40->UseVisualStyleBackColor = true;
            this->button40->Visible = false;
            this->button40->Click += gcnew System::EventHandler(this, &MyForm::button40_Click);
            // 
            // button41
            // 
            this->button41->AccessibleDescription = L"y33";
            this->button41->AccessibleName = L"y33";
            this->button41->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
            this->button41->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button41->FlatAppearance->BorderSize = 0;
            this->button41->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button41->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
            this->button41->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button41->Font = (gcnew System::Drawing::Font(L"Rigid Display Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button41->Location = System::Drawing::Point(525, 392);
            this->button41->Name = L"button41";
            this->button41->Size = System::Drawing::Size(117, 49);
            this->button41->TabIndex = 81;
            this->button41->Tag = L"y33";
            this->button41->Text = L"orange";
            this->button41->UseVisualStyleBackColor = true;
            this->button41->Visible = false;
            this->button41->Click += gcnew System::EventHandler(this, &MyForm::button41_Click);
            // 
            // label24
            // 
            this->label24->AccessibleDescription = L"y33";
            this->label24->AccessibleName = L"y33";
            this->label24->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
            this->label24->AutoSize = true;
            this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label24->Location = System::Drawing::Point(515, 132);
            this->label24->Name = L"label24";
            this->label24->Size = System::Drawing::Size(134, 16);
            this->label24->TabIndex = 82;
            this->label24->Tag = L"y33";
            this->label24->Text = L"select the frame color";
            this->label24->Visible = false;
            // 
            // button42
            // 
            this->button42->AccessibleDescription = L"y33";
            this->button42->AccessibleName = L"y33";
            this->button42->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
            this->button42->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button42->FlatAppearance->BorderSize = 0;
            this->button42->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button42->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
            this->button42->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button42->Font = (gcnew System::Drawing::Font(L"Rigid Display Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button42->Location = System::Drawing::Point(520, 157);
            this->button42->Name = L"button42";
            this->button42->Size = System::Drawing::Size(117, 49);
            this->button42->TabIndex = 83;
            this->button42->Tag = L"y33";
            this->button42->Text = L"Red";
            this->button42->UseVisualStyleBackColor = true;
            this->button42->Visible = false;
            this->button42->Click += gcnew System::EventHandler(this, &MyForm::button42_Click);
            // 
            // button43
            // 
            this->button43->AccessibleDescription = L"y33";
            this->button43->AccessibleName = L"y33";
            this->button43->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
            this->button43->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button43->FlatAppearance->BorderSize = 0;
            this->button43->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button43->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
            this->button43->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button43->Font = (gcnew System::Drawing::Font(L"Rigid Display Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button43->Location = System::Drawing::Point(518, 215);
            this->button43->Name = L"button43";
            this->button43->Size = System::Drawing::Size(117, 49);
            this->button43->TabIndex = 84;
            this->button43->Tag = L"y33";
            this->button43->Text = L"Green";
            this->button43->UseVisualStyleBackColor = true;
            this->button43->Visible = false;
            this->button43->Click += gcnew System::EventHandler(this, &MyForm::button43_Click);
            // 
            // button44
            // 
            this->button44->AccessibleDescription = L"y33";
            this->button44->AccessibleName = L"y33";
            this->button44->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
            this->button44->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button44->FlatAppearance->BorderSize = 0;
            this->button44->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button44->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
            this->button44->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button44->Font = (gcnew System::Drawing::Font(L"Rigid Display Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button44->Location = System::Drawing::Point(520, 274);
            this->button44->Name = L"button44";
            this->button44->Size = System::Drawing::Size(117, 49);
            this->button44->TabIndex = 85;
            this->button44->Tag = L"y33";
            this->button44->Text = L"Blue";
            this->button44->UseVisualStyleBackColor = true;
            this->button44->Visible = false;
            this->button44->Click += gcnew System::EventHandler(this, &MyForm::button44_Click);
            // 
            // button45
            // 
            this->button45->AccessibleDescription = L"y33";
            this->button45->AccessibleName = L"y33";
            this->button45->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
            this->button45->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button45->FlatAppearance->BorderSize = 0;
            this->button45->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button45->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
            this->button45->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button45->Font = (gcnew System::Drawing::Font(L"Rigid Display Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button45->Location = System::Drawing::Point(520, 337);
            this->button45->Name = L"button45";
            this->button45->Size = System::Drawing::Size(117, 49);
            this->button45->TabIndex = 86;
            this->button45->Tag = L"y33";
            this->button45->Text = L"Yellow";
            this->button45->UseVisualStyleBackColor = true;
            this->button45->Visible = false;
            this->button45->Click += gcnew System::EventHandler(this, &MyForm::button45_Click);
            // 
            // button46
            // 
            this->button46->AccessibleDescription = L"y33";
            this->button46->AccessibleName = L"y33";
            this->button46->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
            this->button46->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button46->FlatAppearance->BorderSize = 0;
            this->button46->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button46->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
            this->button46->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button46->Font = (gcnew System::Drawing::Font(L"Rigid Display Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button46->Location = System::Drawing::Point(525, 392);
            this->button46->Name = L"button46";
            this->button46->Size = System::Drawing::Size(117, 49);
            this->button46->TabIndex = 87;
            this->button46->Tag = L"y33";
            this->button46->Text = L"orange";
            this->button46->UseVisualStyleBackColor = true;
            this->button46->Visible = false;
            this->button46->Click += gcnew System::EventHandler(this, &MyForm::button46_Click);
            // 
            // button47
            // 
            this->button47->AccessibleDescription = L"y33";
            this->button47->AccessibleName = L"y33";
            this->button47->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
            this->button47->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button47->FlatAppearance->BorderSize = 0;
            this->button47->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button47->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
            this->button47->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button47->Font = (gcnew System::Drawing::Font(L"Rigid Display Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button47->Location = System::Drawing::Point(525, 447);
            this->button47->Name = L"button47";
            this->button47->Size = System::Drawing::Size(117, 49);
            this->button47->TabIndex = 88;
            this->button47->Tag = L"y33";
            this->button47->Text = L"black";
            this->button47->UseVisualStyleBackColor = true;
            this->button47->Visible = false;
            this->button47->Click += gcnew System::EventHandler(this, &MyForm::button47_Click);
            // 
            // label25
            // 
            this->label25->AccessibleDescription = L"y33";
            this->label25->AccessibleName = L"y33";
            this->label25->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
            this->label25->AutoSize = true;
            this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label25->Location = System::Drawing::Point(522, 132);
            this->label25->Name = L"label25";
            this->label25->Size = System::Drawing::Size(154, 16);
            this->label25->TabIndex = 89;
            this->label25->Tag = L"y33";
            this->label25->Text = L"choose the primary color";
            this->label25->Visible = false;
            // 
            // label26
            // 
            this->label26->AccessibleDescription = L"y33";
            this->label26->AccessibleName = L"y33";
            this->label26->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
            this->label26->AutoSize = true;
            this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label26->Location = System::Drawing::Point(693, 130);
            this->label26->Name = L"label26";
            this->label26->Size = System::Drawing::Size(165, 16);
            this->label26->TabIndex = 90;
            this->label26->Tag = L"y33";
            this->label26->Text = L"choose the secondry color";
            this->label26->Visible = false;
            // 
            // button49
            // 
            this->button49->AccessibleDescription = L"y33";
            this->button49->AccessibleName = L"y33";
            this->button49->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
            this->button49->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button49->FlatAppearance->BorderSize = 0;
            this->button49->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button49->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
            this->button49->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button49->Font = (gcnew System::Drawing::Font(L"Rigid Display Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button49->Location = System::Drawing::Point(708, 206);
            this->button49->Name = L"button49";
            this->button49->Size = System::Drawing::Size(117, 49);
            this->button49->TabIndex = 92;
            this->button49->Tag = L"y33";
            this->button49->Text = L"Green";
            this->button49->UseVisualStyleBackColor = true;
            this->button49->Visible = false;
            this->button49->Click += gcnew System::EventHandler(this, &MyForm::button49_Click);
            // 
            // button50
            // 
            this->button50->AccessibleDescription = L"y33";
            this->button50->AccessibleName = L"y33";
            this->button50->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
            this->button50->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button50->FlatAppearance->BorderSize = 0;
            this->button50->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button50->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
            this->button50->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button50->Font = (gcnew System::Drawing::Font(L"Rigid Display Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button50->Location = System::Drawing::Point(708, 274);
            this->button50->Name = L"button50";
            this->button50->Size = System::Drawing::Size(117, 49);
            this->button50->TabIndex = 93;
            this->button50->Tag = L"y33";
            this->button50->Text = L"Blue";
            this->button50->UseVisualStyleBackColor = true;
            this->button50->Visible = false;
            this->button50->Click += gcnew System::EventHandler(this, &MyForm::button50_Click);
            // 
            // button51
            // 
            this->button51->AccessibleDescription = L"y33";
            this->button51->AccessibleName = L"y33";
            this->button51->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
            this->button51->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button51->FlatAppearance->BorderSize = 0;
            this->button51->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button51->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
            this->button51->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button51->Font = (gcnew System::Drawing::Font(L"Rigid Display Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button51->Location = System::Drawing::Point(708, 337);
            this->button51->Name = L"button51";
            this->button51->Size = System::Drawing::Size(117, 49);
            this->button51->TabIndex = 94;
            this->button51->Tag = L"y33";
            this->button51->Text = L"Yellow";
            this->button51->UseVisualStyleBackColor = true;
            this->button51->Visible = false;
            this->button51->Click += gcnew System::EventHandler(this, &MyForm::button51_Click);
            // 
            // button52
            // 
            this->button52->AccessibleDescription = L"y33";
            this->button52->AccessibleName = L"y33";
            this->button52->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
            this->button52->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button52->FlatAppearance->BorderSize = 0;
            this->button52->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button52->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
            this->button52->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button52->Font = (gcnew System::Drawing::Font(L"Rigid Display Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button52->Location = System::Drawing::Point(708, 391);
            this->button52->Name = L"button52";
            this->button52->Size = System::Drawing::Size(117, 49);
            this->button52->TabIndex = 95;
            this->button52->Tag = L"y33";
            this->button52->Text = L"orange";
            this->button52->UseVisualStyleBackColor = true;
            this->button52->Visible = false;
            this->button52->Click += gcnew System::EventHandler(this, &MyForm::button52_Click);
            // 
            // button53
            // 
            this->button53->AccessibleDescription = L"y33";
            this->button53->AccessibleName = L"y33";
            this->button53->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
            this->button53->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button53->FlatAppearance->BorderSize = 0;
            this->button53->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button53->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
            this->button53->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button53->Font = (gcnew System::Drawing::Font(L"Rigid Display Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button53->Location = System::Drawing::Point(708, 448);
            this->button53->Name = L"button53";
            this->button53->Size = System::Drawing::Size(117, 49);
            this->button53->TabIndex = 96;
            this->button53->Tag = L"y33";
            this->button53->Text = L"black";
            this->button53->UseVisualStyleBackColor = true;
            this->button53->Visible = false;
            this->button53->Click += gcnew System::EventHandler(this, &MyForm::button53_Click);
            // 
            // button48
            // 
            this->button48->AccessibleDescription = L"y33";
            this->button48->AccessibleName = L"y33";
            this->button48->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
            this->button48->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button48->FlatAppearance->BorderSize = 0;
            this->button48->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button48->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
            this->button48->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button48->Font = (gcnew System::Drawing::Font(L"Rigid Display Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button48->Location = System::Drawing::Point(708, 152);
            this->button48->Name = L"button48";
            this->button48->Size = System::Drawing::Size(117, 49);
            this->button48->TabIndex = 91;
            this->button48->Tag = L"y33";
            this->button48->Text = L"Red";
            this->button48->UseVisualStyleBackColor = true;
            this->button48->Visible = false;
            this->button48->Click += gcnew System::EventHandler(this, &MyForm::button48_Click);
            // 
            // button54
            // 
            this->button54->AccessibleDescription = L"y33";
            this->button54->AccessibleName = L"y33";
            this->button54->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
            this->button54->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button54->FlatAppearance->BorderSize = 0;
            this->button54->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button54->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
            this->button54->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button54->Font = (gcnew System::Drawing::Font(L"Rigid Display Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button54->Location = System::Drawing::Point(525, 162);
            this->button54->Name = L"button54";
            this->button54->Size = System::Drawing::Size(117, 49);
            this->button54->TabIndex = 97;
            this->button54->Tag = L"y33";
            this->button54->Text = L"Red";
            this->button54->UseVisualStyleBackColor = true;
            this->button54->Visible = false;
            this->button54->Click += gcnew System::EventHandler(this, &MyForm::button54_Click);
            // 
            // button55
            // 
            this->button55->AccessibleDescription = L"y33";
            this->button55->AccessibleName = L"y33";
            this->button55->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
            this->button55->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button55->FlatAppearance->BorderSize = 0;
            this->button55->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button55->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
            this->button55->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button55->Font = (gcnew System::Drawing::Font(L"Rigid Display Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button55->Location = System::Drawing::Point(520, 223);
            this->button55->Name = L"button55";
            this->button55->Size = System::Drawing::Size(117, 49);
            this->button55->TabIndex = 98;
            this->button55->Tag = L"y33";
            this->button55->Text = L"Green";
            this->button55->UseVisualStyleBackColor = true;
            this->button55->Visible = false;
            this->button55->Click += gcnew System::EventHandler(this, &MyForm::button55_Click);
            // 
            // button56
            // 
            this->button56->AccessibleDescription = L"y33";
            this->button56->AccessibleName = L"y33";
            this->button56->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
            this->button56->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button56->FlatAppearance->BorderSize = 0;
            this->button56->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button56->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
            this->button56->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button56->Font = (gcnew System::Drawing::Font(L"Rigid Display Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button56->Location = System::Drawing::Point(525, 288);
            this->button56->Name = L"button56";
            this->button56->Size = System::Drawing::Size(117, 49);
            this->button56->TabIndex = 99;
            this->button56->Tag = L"y33";
            this->button56->Text = L"Blue";
            this->button56->UseVisualStyleBackColor = true;
            this->button56->Visible = false;
            this->button56->Click += gcnew System::EventHandler(this, &MyForm::button56_Click);
            // 
            // button57
            // 
            this->button57->AccessibleDescription = L"y33";
            this->button57->AccessibleName = L"y33";
            this->button57->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
            this->button57->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button57->FlatAppearance->BorderSize = 0;
            this->button57->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button57->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
            this->button57->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button57->Font = (gcnew System::Drawing::Font(L"Rigid Display Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button57->Location = System::Drawing::Point(527, 343);
            this->button57->Name = L"button57";
            this->button57->Size = System::Drawing::Size(117, 49);
            this->button57->TabIndex = 100;
            this->button57->Tag = L"y33";
            this->button57->Text = L"Yellow";
            this->button57->UseVisualStyleBackColor = true;
            this->button57->Visible = false;
            this->button57->Click += gcnew System::EventHandler(this, &MyForm::button57_Click);
            // 
            // button58
            // 
            this->button58->AccessibleDescription = L"y33";
            this->button58->AccessibleName = L"y33";
            this->button58->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
            this->button58->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button58->FlatAppearance->BorderSize = 0;
            this->button58->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button58->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
            this->button58->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button58->Font = (gcnew System::Drawing::Font(L"Rigid Display Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button58->Location = System::Drawing::Point(535, 398);
            this->button58->Name = L"button58";
            this->button58->Size = System::Drawing::Size(117, 49);
            this->button58->TabIndex = 101;
            this->button58->Tag = L"y33";
            this->button58->Text = L"orange";
            this->button58->UseVisualStyleBackColor = true;
            this->button58->Visible = false;
            this->button58->Click += gcnew System::EventHandler(this, &MyForm::button58_Click);
            // 
            // button59
            // 
            this->button59->AccessibleDescription = L"y33";
            this->button59->AccessibleName = L"y33";
            this->button59->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
            this->button59->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button59->FlatAppearance->BorderSize = 0;
            this->button59->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button59->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
            this->button59->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button59->Font = (gcnew System::Drawing::Font(L"Rigid Display Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button59->Location = System::Drawing::Point(527, 453);
            this->button59->Name = L"button59";
            this->button59->Size = System::Drawing::Size(117, 49);
            this->button59->TabIndex = 102;
            this->button59->Tag = L"y33";
            this->button59->Text = L"black";
            this->button59->UseVisualStyleBackColor = true;
            this->button59->Visible = false;
            this->button59->Click += gcnew System::EventHandler(this, &MyForm::button59_Click);
            // 
            // label27
            // 
            this->label27->AccessibleDescription = L"y33";
            this->label27->AccessibleName = L"y33";
            this->label27->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
            this->label27->AutoSize = true;
            this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label27->Location = System::Drawing::Point(532, 132);
            this->label27->Name = L"label27";
            this->label27->Size = System::Drawing::Size(134, 16);
            this->label27->TabIndex = 103;
            this->label27->Tag = L"y33";
            this->label27->Text = L"select the frame color";
            this->label27->Visible = false;
            // 
            // button60
            // 
            this->button60->AccessibleName = L"haha";
            this->button60->BackColor = System::Drawing::Color::Transparent;
            this->button60->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button60->FlatAppearance->BorderSize = 0;
            this->button60->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button60->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
            this->button60->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button60->Font = (gcnew System::Drawing::Font(L"Rigid Display Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button60->Location = System::Drawing::Point(963, 408);
            this->button60->Name = L"button60";
            this->button60->Size = System::Drawing::Size(167, 28);
            this->button60->TabIndex = 104;
            this->button60->Text = L"Sepiatone";
            this->button60->UseVisualStyleBackColor = false;
            this->button60->Click += gcnew System::EventHandler(this, &MyForm::button60_Click);
            // 
            // button61
            // 
            this->button61->AccessibleName = L"haha";
            this->button61->BackColor = System::Drawing::Color::Transparent;
            this->button61->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button61->FlatAppearance->BorderSize = 0;
            this->button61->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button61->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
            this->button61->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button61->Font = (gcnew System::Drawing::Font(L"Rigid Display Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button61->Location = System::Drawing::Point(1164, 408);
            this->button61->Name = L"button61";
            this->button61->Size = System::Drawing::Size(167, 28);
            this->button61->TabIndex = 105;
            this->button61->Text = L"cinematic";
            this->button61->UseVisualStyleBackColor = false;
            this->button61->Click += gcnew System::EventHandler(this, &MyForm::button61_Click);
            // 
            // pictureBox5
            // 
            this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
            this->pictureBox5->Location = System::Drawing::Point(266, 210);
            this->pictureBox5->Name = L"pictureBox5";
            this->pictureBox5->Size = System::Drawing::Size(224, 231);
            this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox5->TabIndex = 106;
            this->pictureBox5->TabStop = false;
            this->pictureBox5->Visible = false;
            // 
            // button62
            // 
            this->button62->AccessibleName = L"haha";
            this->button62->BackColor = System::Drawing::Color::Transparent;
            this->button62->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button62->FlatAppearance->BorderSize = 0;
            this->button62->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button62->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
            this->button62->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button62->Font = (gcnew System::Drawing::Font(L"Rigid Display Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button62->Location = System::Drawing::Point(1164, 442);
            this->button62->Name = L"button62";
            this->button62->Size = System::Drawing::Size(167, 28);
            this->button62->TabIndex = 107;
            this->button62->Text = L"Oil painting";
            this->button62->UseVisualStyleBackColor = false;
            this->button62->Click += gcnew System::EventHandler(this, &MyForm::button62_Click);
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::White;
            this->ClientSize = System::Drawing::Size(1343, 571);
            this->Controls->Add(this->button62);
            this->Controls->Add(this->pictureBox5);
            this->Controls->Add(this->button61);
            this->Controls->Add(this->button60);
            this->Controls->Add(this->label27);
            this->Controls->Add(this->button59);
            this->Controls->Add(this->button58);
            this->Controls->Add(this->button57);
            this->Controls->Add(this->button56);
            this->Controls->Add(this->button55);
            this->Controls->Add(this->button54);
            this->Controls->Add(this->button53);
            this->Controls->Add(this->button52);
            this->Controls->Add(this->button51);
            this->Controls->Add(this->button50);
            this->Controls->Add(this->button49);
            this->Controls->Add(this->button48);
            this->Controls->Add(this->label26);
            this->Controls->Add(this->label25);
            this->Controls->Add(this->button47);
            this->Controls->Add(this->button46);
            this->Controls->Add(this->button45);
            this->Controls->Add(this->button44);
            this->Controls->Add(this->button43);
            this->Controls->Add(this->button42);
            this->Controls->Add(this->label24);
            this->Controls->Add(this->button41);
            this->Controls->Add(this->button40);
            this->Controls->Add(this->button39);
            this->Controls->Add(this->button38);
            this->Controls->Add(this->button37);
            this->Controls->Add(this->label23);
            this->Controls->Add(this->button36);
            this->Controls->Add(this->button35);
            this->Controls->Add(this->button34);
            this->Controls->Add(this->button33);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label20);
            this->Controls->Add(this->button32);
            this->Controls->Add(this->pictureBox4);
            this->Controls->Add(this->label22);
            this->Controls->Add(this->label21);
            this->Controls->Add(this->label19);
            this->Controls->Add(this->label18);
            this->Controls->Add(this->textBox7);
            this->Controls->Add(this->textBox6);
            this->Controls->Add(this->button31);
            this->Controls->Add(this->textBox4);
            this->Controls->Add(this->label16);
            this->Controls->Add(this->textBox5);
            this->Controls->Add(this->label17);
            this->Controls->Add(this->button30);
            this->Controls->Add(this->button29);
            this->Controls->Add(this->button28);
            this->Controls->Add(this->button27);
            this->Controls->Add(this->trackBar2);
            this->Controls->Add(this->button26);
            this->Controls->Add(this->button25);
            this->Controls->Add(this->button24);
            this->Controls->Add(this->button23);
            this->Controls->Add(this->label15);
            this->Controls->Add(this->label14);
            this->Controls->Add(this->button22);
            this->Controls->Add(this->button21);
            this->Controls->Add(this->button20);
            this->Controls->Add(this->pictureBox3);
            this->Controls->Add(this->button19);
            this->Controls->Add(this->button18);
            this->Controls->Add(this->button16);
            this->Controls->Add(this->label13);
            this->Controls->Add(this->textBox3);
            this->Controls->Add(this->label12);
            this->Controls->Add(this->label11);
            this->Controls->Add(this->textBox2);
            this->Controls->Add(this->label10);
            this->Controls->Add(this->textBox1);
            this->Controls->Add(this->label9);
            this->Controls->Add(this->button17);
            this->Controls->Add(this->button15);
            this->Controls->Add(this->button14);
            this->Controls->Add(this->button13);
            this->Controls->Add(this->button12);
            this->Controls->Add(this->button11);
            this->Controls->Add(this->label8);
            this->Controls->Add(this->label7);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->button10);
            this->Controls->Add(this->button9);
            this->Controls->Add(this->button8);
            this->Controls->Add(this->trackBar1);
            this->Controls->Add(this->button7);
            this->Controls->Add(this->button6);
            this->Controls->Add(this->button5);
            this->Controls->Add(this->button4);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->pictureBox2);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->button3);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->pictureBox1);
            this->Cursor = System::Windows::Forms::Cursors::Default;
            this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
            this->ForeColor = System::Drawing::SystemColors::Desktop;
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->KeyPreview = true;
            this->Name = L"MyForm";
            this->Tag = L"";
            this->Text = L"Baby PHOTOSHOP";
            this->TopMost = true;
            this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
        array<String^>^ files;
        String^ path;
        array<String^>^ files2;
        String^ path2;
        int currentIndex;
        int count;
        String^ filePath;
        String^ filePath2;
        Bitmap^ previeww;
        Bitmap^ previeww2;
        int pc = 0;
        bool loaded;

    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        pictureBox1->Image = nullptr;
        pictureBox2->Image = nullptr;
        label11->Visible = true;
        label12->Visible = true;
        label15->Visible = false;
        label14->Visible = false;
        label3->Text="";
        loaded = false;
        trackBar1->Visible = false;
        button9->Visible = false;
        label13->Visible = false;
        label27->Visible = false;
        textBox3->Visible = false;
        button16->Visible = false;
        textBox1->Visible = false;
        textBox2->Visible = false;
        label9->Visible = false;
        label10->Visible = false;
        button17->Visible = false;
        button19->Visible = false;
        trackBar1->Visible = false;
        button9->Visible = false;
        label13->Visible = false;
        textBox3->Visible = false;
        button16->Visible = false;
        textBox1->Visible = false;
        textBox2->Visible = false;
        label9->Visible = false;
        label10->Visible = false;
        button17->Visible = false;
        button19->Visible = false;
        button20->Visible = false;
        button21->Visible = false;
        button24->Visible = false;
        button25->Visible = false;
        button26->Visible = false;
        trackBar2->Visible = false;
        button27->Visible = false;
        button31->Visible = false;
        textBox4->Visible = false;
        textBox5->Visible = false;
        label16->Visible = false;
        label17->Visible = false;
        textBox6->Visible = false;
        textBox7->Visible = false;
        label18->Visible = false;
        label19->Visible = false;
        label21->Visible = false;
        label22->Visible = false;
        button34->Visible = false;
        button35->Visible = false;
        button36->Visible = false;
        label23->Visible = false;
        button37->Visible = false;
        button38->Visible = false;
        button39->Visible = false;
        button40->Visible = false;
        button41->Visible = false;
        label24->Visible = false;
        button42->Visible = false;
        button43->Visible = false;
        button44->Visible = false;
        button45->Visible = false;
        button46->Visible = false;
        button47->Visible = false;
        label25->Visible = false;
        label26->Visible = false;
        button48->Visible = false;
        button49->Visible = false;
        button50->Visible = false;
        button51->Visible = false;
        button52->Visible = false;
        button53->Visible = false;
        pictureBox3->Visible = false;
        button54->Visible = false;
        button55->Visible = false;
        button56->Visible = false;
        button57->Visible = false;
        button58->Visible = false;
        button59->Visible = false;
        button20->Visible = false;
        button21->Visible = false;
        button24->Visible = false;
        button25->Visible = false;
        button26->Visible = false;
        trackBar2->Visible = false;
        button27->Visible = false;
        button31->Visible = false;
        textBox4->Visible = false;
        textBox5->Visible = false;
        label16->Visible = false;
        label17->Visible = false;
        textBox6->Visible = false;
        textBox7->Visible = false;
        label18->Visible = false;
        label19->Visible = false;
        label21->Visible = false;
        label22->Visible = false;
        button34->Visible = false;
        button35->Visible = false;
        button36->Visible = false;
        label23->Visible = false;
        button37->Visible = false;
        button38->Visible = false;
        button39->Visible = false;
        button40->Visible = false;
        button41->Visible = false;
        label24->Visible = false;
        button42->Visible = false;
        button43->Visible = false;
        button44->Visible = false;
        button45->Visible = false;
        button46->Visible = false;
        button47->Visible = false;
        label25->Visible = false;
        label26->Visible = false;
        button48->Visible = false;
        button49->Visible = false;
        button50->Visible = false;
        button51->Visible = false;
        button52->Visible = false;
        button53->Visible = false;
    }

    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
        Application::Exit();
    }

    private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
        if (ofd1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
            pictureBox1->ImageLocation = ofd1->FileName;
            path = System::IO::Path::GetDirectoryName(ofd1->FileName);
            files = System::IO::Directory::GetFiles(path);
            label11->Visible = false;
            for (int i = 0; i < files->Length; i++) {
                if (files[i] == ofd1->FileName) {
                    currentIndex = i;
                    break;
                }
            }
            filePath = pictureBox1->ImageLocation;
            previeww = gcnew Bitmap(filePath);
            label15->Text = filePath;
            label14->Visible = true;
            label15->Visible = true;
            label3->Visible = false;
            loaded = 1;
            label3->Text = "Image loaded succefully";
        }
    }
    private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
        if (loaded) {
            trackBar1->Visible = false;
            button9->Visible = false;
            label13->Visible = false;
            textBox3->Visible = false;
            button16->Visible = false;
            textBox1->Visible = false;
            textBox2->Visible = false;
            label9->Visible = false;
            label10->Visible = false;
            button17->Visible = false;
            button19->Visible = false;
            button20->Visible = false;
            button21->Visible = false;
            button24->Visible = false;
            button25->Visible = false;
            button26->Visible = false;
            trackBar2->Visible = false;
            button27->Visible = false;
            button31->Visible = false;
            button54->Visible = false;
            button55->Visible = false;
            button56->Visible = false;
            button57->Visible = false;
            button58->Visible = false;
            label27->Visible = false;
            button59->Visible = false;
            textBox4->Visible = false;
            textBox5->Visible = false;
            label16->Visible = false;
            label17->Visible = false;
            textBox6->Visible = false;
            textBox7->Visible = false;
            label18->Visible = false;
            label19->Visible = false;
            label21->Visible = false;
            label22->Visible = false;
            button34->Visible = false;
            button35->Visible = false;
            button36->Visible = false;
            label23->Visible = false;
            button37->Visible = false;
            button38->Visible = false;
            button39->Visible = false;
            button40->Visible = false;
            button41->Visible = false;
            label24->Visible = false;
            button42->Visible = false;
            button43->Visible = false;
            button44->Visible = false;
            button45->Visible = false;
            button46->Visible = false;
            button47->Visible = false;
            label25->Visible = false;
            label26->Visible = false;
            button48->Visible = false;
            button49->Visible = false;
            button50->Visible = false;
            button51->Visible = false;
            button52->Visible = false;
            button53->Visible = false;
            label12->Visible = false;
            count++;
            if (pictureBox1->Image != nullptr) {
                Bitmap^ image = previeww;
                // Perform the grayscale conversion
                for (int i = 0; i < image->Width; ++i) {
                    for (int j = image->Height - 1; j >= 0; --j) {
                        Color x = image->GetPixel(i, j);
                        unsigned int avg = (x.R + x.G + x.B) / 3;
                        Color newColor = Color::FromArgb(avg, avg, avg);
                        image->SetPixel(i, j, newColor);
                    }
                }
                previeww = image;
                pictureBox2->Image = image;
            }
        }
        else {
            label3->Text = "Please load an image";
        }
    }
    private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
        if (loaded) {
            trackBar1->Visible = false;
            button9->Visible = false;
            label13->Visible = false;
            textBox3->Visible = false;
            button16->Visible = false;
            textBox1->Visible = false;
            textBox2->Visible = false;
            label9->Visible = false;
            label10->Visible = false;
            button17->Visible = false;
            button19->Visible = false;
            button20->Visible = false;
            button21->Visible = false;
            button24->Visible = false;
            button54->Visible = false;
            button55->Visible = false;
            button56->Visible = false;
            button57->Visible = false;
            button58->Visible = false;
            button59->Visible = false;
            button25->Visible = false;
            button26->Visible = false;
            trackBar2->Visible = false;
            button27->Visible = false;
            button31->Visible = false;
            textBox4->Visible = false;
            textBox5->Visible = false;
            label16->Visible = false;
            label17->Visible = false;
            textBox6->Visible = false;
            textBox7->Visible = false;
            label18->Visible = false;
            label19->Visible = false;
            label21->Visible = false; label27->Visible = false;
            label22->Visible = false;
            button34->Visible = false;
            button35->Visible = false;
            button36->Visible = false;
            label23->Visible = false;
            button37->Visible = false;
            button38->Visible = false;
            button39->Visible = false;
            button40->Visible = false;
            button41->Visible = false;
            label24->Visible = false;
            button42->Visible = false;
            button43->Visible = false;
            button44->Visible = false;
            button45->Visible = false;
            button46->Visible = false;
            button47->Visible = false;
            label25->Visible = false;
            label26->Visible = false;
            button48->Visible = false;
            button49->Visible = false;
            button50->Visible = false;
            button51->Visible = false;
            button52->Visible = false;
            button53->Visible = false;
            label12->Visible = false;
            pictureBox5->Visible = true;
            count++;
            if (pictureBox1->Image != nullptr) {
                // Get the file path of the loaded image
                // Convert the managed string to a standard string
                Bitmap^ image = previeww;





                for (int i = 0; i < image->Width; ++i) {
                    for (int j = image->Height - 1; j >= 0; --j) {
                        Color x = image->GetPixel(i, j);
                        unsigned int avg = (x.R + x.G + x.B) / 3;
                        Color newColor = Color::FromArgb(avg, avg, avg);
                        image->SetPixel(i, j, newColor);
                    }
                }
                for (int i = 0; i < image->Width; ++i) {
                    for (int j = 0; j < image->Height; j++) {
                        Color c = image->GetPixel(i, j);
                        unsigned int x = (c.R + c.G + c.B) / 3;
                        if (x > 128) {
                            int z = 255;
                            Color newcolor = Color::FromArgb(z, z, z);
                            image->SetPixel(i, j, newcolor);
                        }
                        else {
                            int z = 0;
                            Color newcolor = Color::FromArgb(z, z, z);
                            image->SetPixel(i, j, newcolor);
                        }
                    }
                }
                pictureBox5->Visible = false;
                previeww = image;
                pictureBox2->Image = image;
            }
        }
        else {
            label3->Text = "Please load an image";
        }
    }
    private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
        if (loaded) {
            trackBar1->Visible = false;
            button9->Visible = false;
            label13->Visible = false;
            textBox3->Visible = false;
            button16->Visible = false;
            textBox1->Visible = false;
            textBox2->Visible = false;
            label9->Visible = false;
            label10->Visible = false;
            button17->Visible = false;
            button19->Visible = false;
            button20->Visible = false;
            button21->Visible = false;
            button24->Visible = false;
            button25->Visible = false;
            button26->Visible = false;
            trackBar2->Visible = false;
            button27->Visible = false;
            button31->Visible = false;
            textBox4->Visible = false;
            button54->Visible = false;
            button55->Visible = false;
            button56->Visible = false;
            button57->Visible = false; label27->Visible = false;
            button58->Visible = false;
            button59->Visible = false;
            textBox5->Visible = false;
            label16->Visible = false;
            label17->Visible = false;
            textBox6->Visible = false;
            textBox7->Visible = false;
            label18->Visible = false;
            label19->Visible = false;
            label21->Visible = false;
            label22->Visible = false;
            button34->Visible = false;
            button35->Visible = false;
            button36->Visible = false;
            label23->Visible = false;
            button37->Visible = false;
            button38->Visible = false;
            button39->Visible = false;
            button40->Visible = false;
            button41->Visible = false;
            label24->Visible = false;
            button42->Visible = false;
            button43->Visible = false;
            button44->Visible = false;
            button45->Visible = false;
            button46->Visible = false;
            button47->Visible = false;
            label25->Visible = false;
            label26->Visible = false;
            button48->Visible = false;
            button49->Visible = false;
            button50->Visible = false;
            button51->Visible = false;
            button52->Visible = false;
            button53->Visible = false;
            pictureBox5->Visible = true;
            label12->Visible = false;
            count++;
            if (pictureBox1->Image != nullptr) {
                // Get the file path of the loaded image

                // Convert the managed string to a standard string


                Bitmap^ image = previeww;
                Bitmap^ image2 = gcnew Bitmap(image->Width, image->Height);
                int y;
                for (int i = 0; i < image->Width; ++i) {
                    y = 0;
                    for (int j = image->Height - 1; j >= 0; --j) {
                        Color c = image->GetPixel(i, j);
                        image2->SetPixel(i, y, c);
                        y++;
                    }
                }
                pictureBox5->Visible = false;
                previeww = image2;
                pictureBox2->Image = image2;

            }
            else {
                label3->Text = "Please load an image";
            }
        }
}
    private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
        if (loaded) {
            trackBar1->Visible = false;
            button9->Visible = false;
            label13->Visible = false;
            textBox3->Visible = false;
            button16->Visible = false;
            textBox1->Visible = false;
            textBox2->Visible = false;
            label9->Visible = false;
            label10->Visible = false;
            button17->Visible = false;
            button19->Visible = false;
            button20->Visible = false;
            button21->Visible = false;
            button24->Visible = false;
            button25->Visible = false;
            button26->Visible = false;
            trackBar2->Visible = false;
            button27->Visible = false;
            button31->Visible = false;
            textBox4->Visible = false;
            textBox5->Visible = false;
            label16->Visible = false;
            label17->Visible = false; label27->Visible = false;
            textBox6->Visible = false;
            textBox7->Visible = false;
            button54->Visible = false;
            button55->Visible = false;
            button56->Visible = false;
            button57->Visible = false;
            button58->Visible = false;
            button59->Visible = false;
            label18->Visible = false;
            label19->Visible = false;
            label21->Visible = false;
            label22->Visible = false;
            button34->Visible = false;
            button35->Visible = false;
            button36->Visible = false;
            label23->Visible = false;
            button37->Visible = false;
            button38->Visible = false;
            button39->Visible = false;
            button40->Visible = false;
            button41->Visible = false;
            label24->Visible = false;
            button42->Visible = false;
            button43->Visible = false;
            button44->Visible = false;
            button45->Visible = false;
            button46->Visible = false;
            button47->Visible = false;
            label25->Visible = false;
            label26->Visible = false;
            button48->Visible = false;
            button49->Visible = false;
            button50->Visible = false;
            button51->Visible = false;
            button52->Visible = false;
            button53->Visible = false;
            pictureBox5->Visible = true;
            count++;
            label12->Visible = false;
            if (pictureBox1->Image != nullptr) {
                // Get the file path of the loaded image
                // Convert the managed string to a standard string
                Bitmap^ image = previeww;
                int f = image->Width - 1;
                Bitmap^ image2 = gcnew Bitmap(image->Width, image->Height);
                for (int i = 0; i < image->Width; i++) {
                    for (int j = 0; j < image->Height; j++) {
                        Color c = image->GetPixel(i, j);
                        image2->SetPixel(f, j, c);
                    }
                    f--;
                }
                pictureBox5->Visible = false;
                previeww = image2;
                pictureBox2->Image = image2;
            }
        }
        else {
            label3->Text = "Please load an image";
        }
    }
    private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
        if (loaded) {
            trackBar1->Visible = false;
            button9->Visible = false;
            label13->Visible = false;
            textBox3->Visible = false;
            button16->Visible = false;
            textBox1->Visible = false;
            textBox2->Visible = false;
            label9->Visible = false;
            label10->Visible = false;
            button17->Visible = false;
            button19->Visible = false;
            button54->Visible = false; label27->Visible = false;
            button55->Visible = false;
            button56->Visible = false;
            button57->Visible = false;
            button58->Visible = false;
            button59->Visible = false;
            button20->Visible = false;
            button21->Visible = false;
            button24->Visible = false;
            button25->Visible = false;
            button26->Visible = false;
            trackBar2->Visible = false;
            button27->Visible = false;
            button31->Visible = false;
            textBox4->Visible = false;
            textBox5->Visible = false;
            label16->Visible = false;
            label17->Visible = false;
            textBox6->Visible = false;
            textBox7->Visible = false;
            label18->Visible = false;
            label19->Visible = false;
            label21->Visible = false;
            label22->Visible = false;
            button34->Visible = false;
            button35->Visible = false;
            button36->Visible = false;
            label23->Visible = false;
            button37->Visible = false;
            button38->Visible = false;
            button39->Visible = false;
            button40->Visible = false;
            button41->Visible = false;
            label24->Visible = false;
            button42->Visible = false;
            button43->Visible = false;
            button44->Visible = false;
            button45->Visible = false;
            button46->Visible = false;
            button47->Visible = false;
            label25->Visible = false;
            label26->Visible = false;
            button48->Visible = false;
            button49->Visible = false;
            button50->Visible = false;
            button51->Visible = false;
            button52->Visible = false;
            button53->Visible = false;
            trackBar1->Visible = true;
            button9->Visible = true;
        }
        else {
            label3->Text = "Please load an image";
        }
    }
    private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
        if (loaded) {
            label12->Visible = false;
            pictureBox5->Visible = true;
            const int x = trackBar1->Value;
            Bitmap^ image = previeww;
            for (int i = 0; i < image->Width; i++) {
                for (int j = 0; j < image->Height; j++) {
                    Color c = image->GetPixel(i, j);
                    int R = c.R + x;
                    int G = c.G + x;
                    int B = c.B + x;

                    // Ensure that the color values don't exceed 255
                    R = (R > 255) ? 255 : R;
                    G = (G > 255) ? 255 : G;
                    B = (B > 255) ? 255 : B;
                    R = (R < 0) ? 0 : R;
                    G = (G < 0) ? 0 : G;
                    B = (B < 0) ? 0 : B;

                    Color neww = Color::FromArgb(R, G, B);
                    image->SetPixel(i, j, neww);
                }
            }
            pictureBox5->Visible = false;
            trackBar1->Visible = false;
            button9->Visible = false;
            previeww = image;
            pictureBox2->Image = image;
        }
        else {
            label3->Text = "Please load an image";
        }
    }
    private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
        if (loaded) {
            trackBar1->Visible = false;
            button9->Visible = false;
            label13->Visible = false;
            textBox3->Visible = false;
            button16->Visible = false;
            textBox1->Visible = false;
            textBox2->Visible = false;
            label9->Visible = false;
            label10->Visible = false;
            button17->Visible = false;
            button19->Visible = false;
            button20->Visible = false;
            button21->Visible = false;
            button54->Visible = false;
            button55->Visible = false;
            button56->Visible = false;
            button57->Visible = false;
            button58->Visible = false;
            button59->Visible = false;
            button24->Visible = false; label27->Visible = false;
            button25->Visible = false;
            button26->Visible = false;
            trackBar2->Visible = false;
            button27->Visible = false;
            button31->Visible = false;
            textBox4->Visible = false;
            textBox5->Visible = false;
            label16->Visible = false;
            label17->Visible = false;
            textBox6->Visible = false;
            textBox7->Visible = false;
            label18->Visible = false;
            label19->Visible = false;
            label21->Visible = false;
            label22->Visible = false;
            button34->Visible = false;
            button35->Visible = false;
            button36->Visible = false;
            label23->Visible = false;
            button37->Visible = false;
            button38->Visible = false;
            button39->Visible = false;
            button40->Visible = false;
            button41->Visible = false;
            label24->Visible = false;
            button42->Visible = false;
            button43->Visible = false;
            button44->Visible = false;
            button45->Visible = false;
            button46->Visible = false;
            button47->Visible = false;
            label25->Visible = false;
            label26->Visible = false;
            button48->Visible = false;
            button49->Visible = false;
            button50->Visible = false;
            button51->Visible = false;
            button52->Visible = false;
            button53->Visible = false;
            label12->Visible = false;
            pictureBox5->Visible = true;
            Bitmap^ image = previeww;
            Bitmap^ image2 = gcnew Bitmap(image->Width, image->Height);
            for (int i = 0; i < image->Width; ++i) {
                int pixel1 = 0;
                int pixel2 = 0;
                unsigned count = 0;
                for (int j = 0; j < image->Height; ++j) {
                    Color pp = image->GetPixel(i, j);
                    int pr = pp.R; int pG = pp.G; int pB = pp.B;
                    pixel2 = pr + pG + pB;
                    count++;
                    if (count == 1) {
                        pixel1 = pixel2;
                        pixel2 = 0;
                    }
                    else if ((count == 2) && (abs(pixel2 - pixel1) > 30)) {

                        Color c = Color::FromArgb(0, 0, 0);
                        Color cc = Color::FromArgb(255, 255, 255);
                        image2->SetPixel(i, j, c);
                        image2->SetPixel(i, j - 1, cc);
                        count = 0;
                        pixel1 = 0;
                        pixel2 = 0;
                    }
                    else {
                        Color cc = Color::FromArgb(255, 255, 255);
                        image2->SetPixel(i, j, cc);
                        image2->SetPixel(i, j - 1, cc);
                        count = 0;
                        pixel1 = 0;
                        pixel2 = 0;
                    }
                    pictureBox5->Visible = false;
                    previeww = image2;
                    pictureBox2->Image = image2;
                }
            }
        }
        else {
            label3->Text = "Please load an image";
        }
    }
    private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
        if (loaded) {
            trackBar1->Visible = false;
            button9->Visible = false;
            label13->Visible = false;
            textBox3->Visible = false;
            button16->Visible = false;
            textBox1->Visible = false;
            textBox2->Visible = false;
            label9->Visible = false;
            label10->Visible = false;
            button17->Visible = false;
            button19->Visible = false;
            button20->Visible = false;
            button21->Visible = false;
            button24->Visible = false;
            button54->Visible = false;
            button55->Visible = false; label27->Visible = false;
            button56->Visible = false;
            button57->Visible = false;
            button58->Visible = false;
            button59->Visible = false;
            button25->Visible = false;
            button26->Visible = false;
            trackBar2->Visible = false;
            button27->Visible = false;
            button31->Visible = false;
            textBox4->Visible = false;
            textBox5->Visible = false;
            label16->Visible = false;
            label17->Visible = false;
            textBox6->Visible = false;
            textBox7->Visible = false;
            label18->Visible = false;
            label19->Visible = false;
            label21->Visible = false;
            label22->Visible = false;
            button34->Visible = false;
            button35->Visible = false;
            button36->Visible = false;
            label23->Visible = false;
            button37->Visible = false;
            button38->Visible = false;
            button39->Visible = false;
            button40->Visible = false;
            button41->Visible = false;
            label24->Visible = false;
            button42->Visible = false;
            button43->Visible = false;
            button44->Visible = false;
            button45->Visible = false;
            button46->Visible = false;
            button47->Visible = false;
            label25->Visible = false;
            label26->Visible = false;
            button48->Visible = false;
            button49->Visible = false;
            button50->Visible = false;
            button51->Visible = false;
            button52->Visible = false;
            button53->Visible = false;
            label12->Visible = false;
            pictureBox5->Visible = true;
            Bitmap^ image = previeww;
            for (int i = 0; i < image->Width; ++i) {
                for (int j = 0; j < image->Height; ++j) {
                    Color c = image->GetPixel(i, j);
                    int R = 255 - c.R; int G = 255 - c.G; int B = 255 - c.B;
                    Color newcolor = Color::FromArgb(R, G, B);
                    image->SetPixel(i, j, newcolor);
                }
            }
            pictureBox5->Visible = false;
            previeww = image;
            pictureBox2->Image = image;
        }
        else {
            label3->Text = "Please load an image";
        }
    }
    private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
        if (loaded) {
            trackBar1->Visible = false;
            button9->Visible = false;
            label13->Visible = false;
            textBox3->Visible = false;
            button16->Visible = false;
            textBox1->Visible = false;
            textBox2->Visible = false;
            label9->Visible = false;
            label10->Visible = false;
            button17->Visible = false;
            button19->Visible = false;
            button20->Visible = false;
            button21->Visible = false;
            button24->Visible = false;
            button25->Visible = false;
            button26->Visible = false;
            trackBar2->Visible = false;
            button27->Visible = false;
            button31->Visible = false;
            textBox4->Visible = false;
            textBox5->Visible = false;
            label16->Visible = false;
            label17->Visible = false; label27->Visible = false;
            textBox6->Visible = false;
            textBox7->Visible = false;
            label18->Visible = false;
            label19->Visible = false;
            button54->Visible = false;
            button55->Visible = false;
            button56->Visible = false;
            button57->Visible = false;
            button58->Visible = false;
            button59->Visible = false;
            label21->Visible = false;
            label22->Visible = false;
            button34->Visible = false;
            button35->Visible = false;
            button36->Visible = false;
            label23->Visible = false;
            button37->Visible = false;
            button38->Visible = false;
            button39->Visible = false;
            button40->Visible = false;
            button41->Visible = false;
            label24->Visible = false;
            button42->Visible = false;
            button43->Visible = false;
            button44->Visible = false;
            button45->Visible = false;
            button46->Visible = false;
            button47->Visible = false;
            label25->Visible = false;
            label26->Visible = false;
            button48->Visible = false;
            button49->Visible = false;
            button50->Visible = false;
            button51->Visible = false;
            button52->Visible = false;
            button53->Visible = false;
            label12->Visible = false;
            pictureBox5->Visible = true;
            Bitmap^ image = previeww;
            for (int i = 0; i < image->Width; ++i) {
                for (int j = 0; j < image->Height; ++j) {
                    Color c = image->GetPixel(i, j);
                    int R = c.R + 60; int G = c.G + 60;
                    R = (R > 255) ? 255 : R;
                    G = (G > 255) ? 255 : G;
                    Color newcolor = Color::FromArgb(R, G, c.B);
                    image->SetPixel(i, j, newcolor);
                }
            }
            pictureBox5->Visible = false;
            previeww = image;
            pictureBox2->Image = image;
        }
        else {
            label3->Text = "Please load an image";
        }
    }
    private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
        if (loaded) {
            trackBar1->Visible = false;
            button9->Visible = false;
            label13->Visible = false;
            trackBar1->Visible = false;
            button9->Visible = false;
            label13->Visible = false;
            textBox3->Visible = false;
            button16->Visible = false;
            button54->Visible = false;
            button55->Visible = false;
            button56->Visible = false;
            button57->Visible = false;
            button58->Visible = false;
            button59->Visible = false;
            textBox1->Visible = false;
            textBox2->Visible = false;
            label9->Visible = false;
            label10->Visible = false;
            button17->Visible = false;
            button19->Visible = false;
            button20->Visible = false;
            button21->Visible = false; label27->Visible = false;
            button24->Visible = false;
            button25->Visible = false;
            button26->Visible = false;
            trackBar2->Visible = false;
            button27->Visible = false;
            button31->Visible = false;
            textBox4->Visible = false;
            textBox5->Visible = false;
            label16->Visible = false;
            label17->Visible = false;
            textBox6->Visible = false;
            textBox7->Visible = false;
            label18->Visible = false;
            label19->Visible = false;
            label21->Visible = false;
            label22->Visible = false;
            button34->Visible = false;
            button35->Visible = false;
            button36->Visible = false;
            label23->Visible = false;
            button37->Visible = false;
            button38->Visible = false;
            button39->Visible = false;
            button40->Visible = false;
            button41->Visible = false;
            label24->Visible = false;
            button42->Visible = false;
            button43->Visible = false;
            button44->Visible = false;
            button45->Visible = false;
            button46->Visible = false;
            button47->Visible = false;
            label25->Visible = false;
            label26->Visible = false;
            button48->Visible = false;
            button49->Visible = false;
            button50->Visible = false;
            button51->Visible = false;
            button52->Visible = false;
            button53->Visible = false;
            pictureBox3->Visible = false;
            textBox3->Visible = false;
            button16->Visible = false;
            textBox1->Visible = false;
            textBox2->Visible = false;
            label9->Visible = false;
            label10->Visible = false;
            button17->Visible = false;
            button19->Visible = false;
            button20->Visible = false;
            button21->Visible = false;
            button24->Visible = false;
            button25->Visible = false;
            button26->Visible = false;
            trackBar2->Visible = false;
            button27->Visible = false;
            button31->Visible = false;
            textBox4->Visible = false;
            textBox5->Visible = false;
            label16->Visible = false;
            label17->Visible = false;
            textBox6->Visible = false;
            textBox7->Visible = false;
            label18->Visible = false;
            label19->Visible = false;
            label21->Visible = false;
            label22->Visible = false;
            button34->Visible = false;
            button35->Visible = false;
            button36->Visible = false;
            label23->Visible = false;
            button37->Visible = false;
            button38->Visible = false;
            button39->Visible = false;
            button40->Visible = false;
            button41->Visible = false;
            label24->Visible = false;
            button42->Visible = false;
            button43->Visible = false;
            button44->Visible = false;
            button45->Visible = false;
            button46->Visible = false;
            button47->Visible = false;
            label25->Visible = false;
            label26->Visible = false;
            button48->Visible = false;
            button49->Visible = false;
            button50->Visible = false;
            button51->Visible = false;
            button52->Visible = false;
            button53->Visible = false;
            label13->Visible = true;
            textBox3->Visible = true;
            button16->Visible = true;
        }
        else {
            label3->Text = "Please load an image";
        }
    }
    private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
        if (loaded) {
            label12->Visible = false;
            pictureBox5->Visible = true;
            Bitmap^ image = previeww;
            for (int i = 0; i < image->Width; ++i) {
                for (int j = 0; j < image->Height; ++j) {
                    Color c = image->GetPixel(i, j);
                    int R = c.R + 60; int B = c.B + 60;
                    R = (R > 255) ? 255 : R;
                    B = (B > 255) ? 255 : B;
                    Color newcolor = Color::FromArgb(R, c.G, B);
                    image->SetPixel(i, j, newcolor);
                }
            }
            for (int i = 0; i < image->Width; i++) {
                for (int j = 0; j < image->Height; j++) {
                    Color c = image->GetPixel(i, j);
                    int R = c.R - 60;
                    int G = c.G - 60;
                    int B = c.B - 60;
                    R = (R < 0) ? 0 : R;
                    G = (G < 0) ? 0 : G;
                    B = (B < 0) ? 0 : B;
                    Color neww = Color::FromArgb(R, G, B);
                    image->SetPixel(i, j, neww);
                }
            }
            pictureBox5->Visible = false;
            label12->Visible = false;
            previeww = image;
            pictureBox2->Image = image;
        }
        else {
            label3->Text = "Please load an image";
        }
    }
    private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
        if (loaded) {
            trackBar1->Visible = false;
            button9->Visible = false;
            label13->Visible = false;
            textBox3->Visible = false;
            button16->Visible = false;
            trackBar1->Visible = false;
            button9->Visible = false;
            label13->Visible = false;
            textBox3->Visible = false;
            button16->Visible = false;
            textBox1->Visible = false;
            textBox2->Visible = false;
            label9->Visible = false;
            label10->Visible = false;
            button17->Visible = false;
            button19->Visible = false;
            button20->Visible = false;
            button21->Visible = false; label27->Visible = false;
            button24->Visible = false;
            button54->Visible = false;
            button55->Visible = false;
            button56->Visible = false;
            button57->Visible = false;
            button58->Visible = false;
            button59->Visible = false;
            button25->Visible = false;
            button26->Visible = false;
            trackBar2->Visible = false;
            button27->Visible = false;
            button31->Visible = false;
            textBox4->Visible = false;
            textBox5->Visible = false;
            label16->Visible = false;
            label17->Visible = false;
            textBox6->Visible = false;
            textBox7->Visible = false;
            label18->Visible = false;
            label19->Visible = false;
            label21->Visible = false;
            label22->Visible = false;
            button34->Visible = false;
            button35->Visible = false;
            button36->Visible = false;
            label23->Visible = false;
            button37->Visible = false;
            button38->Visible = false;
            button39->Visible = false;
            button40->Visible = false;
            button41->Visible = false;
            label24->Visible = false;
            button42->Visible = false;
            button43->Visible = false;
            button44->Visible = false;
            button45->Visible = false;
            button46->Visible = false;
            button47->Visible = false;
            label25->Visible = false;
            label26->Visible = false;
            button48->Visible = false;
            button49->Visible = false;
            button50->Visible = false;
            button51->Visible = false;
            button52->Visible = false;
            button53->Visible = false;
            pictureBox3->Visible = false;
            textBox1->Visible = false;
            textBox2->Visible = false;
            label9->Visible = false;
            label10->Visible = false;
            button17->Visible = false;
            button19->Visible = false;
            button20->Visible = false;
            button21->Visible = false;
            button24->Visible = false;
            button25->Visible = false;
            button26->Visible = false;
            trackBar2->Visible = false;
            button27->Visible = false;
            button31->Visible = false;
            textBox4->Visible = false;
            textBox5->Visible = false;
            label16->Visible = false;
            label17->Visible = false;
            textBox6->Visible = false;
            textBox7->Visible = false;
            label18->Visible = false;
            label19->Visible = false;
            label21->Visible = false;
            label22->Visible = false;
            button34->Visible = false;
            button35->Visible = false;
            button36->Visible = false;
            label23->Visible = false;
            button37->Visible = false;
            button38->Visible = false;
            button39->Visible = false;
            button40->Visible = false;
            button41->Visible = false;
            label24->Visible = false;
            button42->Visible = false;
            button43->Visible = false;
            button44->Visible = false;
            button45->Visible = false;
            button46->Visible = false;
            button47->Visible = false;
            label25->Visible = false;
            label26->Visible = false;
            button48->Visible = false;
            button49->Visible = false;
            button50->Visible = false;
            button51->Visible = false;
            button52->Visible = false;
            button53->Visible = false;
            textBox1->Visible = true;
            textBox2->Visible = true;
            label9->Visible = true;
            label10->Visible = true;
            button17->Visible = true;
        }
        else {
            label3->Text = "Please load an image";
        }
    }
    private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
        if (loaded) {
            label12->Visible = false;
            pictureBox5->Visible = true;
            Bitmap^ image = previeww;
            int wid = System::Convert::ToInt16(textBox1->Text);
            int hiet = System::Convert::ToInt16(textBox2->Text);
            Bitmap^ potatos = gcnew Bitmap(wid, hiet);
            for (int i = 0; i < potatos->Width; ++i) {
                for (int j = 0; j < potatos->Height; ++j) {
                    int w = i * image->Width / potatos->Width;
                    int h = j * image->Height / potatos->Height;
                    w = Math::Min(w, image->Width - 1);
                    h = Math::Min(h, image->Height - 1);
                    Color c = image->GetPixel(w, h);
                    potatos->SetPixel(i, j, c);
                }
            }
            pictureBox5->Visible = false;
            previeww = potatos;
            pictureBox2->Image = potatos;
            textBox1->Visible = false;
            textBox2->Visible = false;
            label9->Visible = false;
            label10->Visible = false;
            button17->Visible = false;
        }
        else {
            label3->Text = "Please load an image";
        }
    }
    private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
        if (loaded) {
            int x = System::Convert::ToDouble(textBox3->Text);
            label12->Visible = false;
            pictureBox5->Visible = true;
            Bitmap^ image = previeww;
            if (x != 90 || x != 270) {
                double SkewAngleRAD = x * 3.14 / 180.0;
                double tan_skew_angle = tan(SkewAngleRAD);
                int NewWidth = image->Width + image->Height * tan_skew_angle;
                if (NewWidth < 0)NewWidth = -NewWidth;
                Bitmap^ newi = gcnew Bitmap(NewWidth, image->Height);
                for (int y = 0; y < newi->Height; ++y) {
                    for (int x = 0; x < newi->Width; ++x) {
                        int source_x = x - tan_skew_angle * (newi->Height - y);
                        if (source_x >= 0 && source_x < (image->Width)) {
                            Color c = image->GetPixel(source_x, y);
                            newi->SetPixel(x, y, c);
                        }
                        else {
                            Color c = Color::FromArgb(255, 255, 255);
                            newi->SetPixel(x, y, c);
                        }
                    }
                }
                pictureBox5->Visible = false;
                previeww = newi;
                pictureBox2->Image = newi;
            }
            label13->Visible = false;
            textBox3->Visible = false;
            button16->Visible = false;
        }
        else {
            label3->Text = "Please load an image";
        }
    }
    private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
        if (loaded) {
            trackBar1->Visible = false;
            button9->Visible = false;
            label13->Visible = false;
            textBox3->Visible = false;
            button16->Visible = false;
            textBox1->Visible = false;
            textBox2->Visible = false;
            label9->Visible = false; label27->Visible = false;
            label10->Visible = false;
            button17->Visible = false;
            button19->Visible = false;
            button20->Visible = false;
            button21->Visible = false;
            button24->Visible = false;
            button25->Visible = false;
            button26->Visible = false;
            trackBar2->Visible = false;
            button27->Visible = false;
            button31->Visible = false;
            textBox4->Visible = false;
            textBox5->Visible = false;
            button54->Visible = false;
            button55->Visible = false;
            button56->Visible = false;
            button57->Visible = false;
            button58->Visible = false;
            button59->Visible = false;
            label16->Visible = false;
            label17->Visible = false;
            textBox6->Visible = false;
            textBox7->Visible = false;
            label18->Visible = false;
            label19->Visible = false;
            label21->Visible = false;
            label22->Visible = false;
            button34->Visible = false;
            button35->Visible = false;
            button36->Visible = false;
            label23->Visible = false;
            button37->Visible = false;
            button38->Visible = false;
            button39->Visible = false;
            button40->Visible = false;
            button41->Visible = false;
            label24->Visible = false;
            button42->Visible = false;
            button43->Visible = false;
            button44->Visible = false;
            button45->Visible = false;
            button46->Visible = false;
            button47->Visible = false;
            label25->Visible = false;
            label26->Visible = false;
            button48->Visible = false;
            button49->Visible = false;
            button50->Visible = false;
            button51->Visible = false;
            button52->Visible = false;
            button53->Visible = false;
            button19->Visible = true;
        }
        else {
            label3->Text = "Please load an image";
        }
    }
    private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
        if (loaded) {
            label12->Visible = false;
            pictureBox5->Visible = true;
            if (ofd1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
                pictureBox3->ImageLocation = ofd1->FileName;
                path2 = System::IO::Path::GetDirectoryName(ofd1->FileName);
                files2 = System::IO::Directory::GetFiles(path);
            }
            pictureBox5->Visible = false;
            pictureBox3->Visible = true;
            filePath2 = pictureBox3->ImageLocation;
            previeww2 = gcnew Bitmap(filePath2);
            button20->Visible = true;
            button21->Visible = true;
        }
        else {
            label3->Text = "Please load an image";
        }
    }    
    private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
        if (loaded) {
            label12->Visible = false;
            pictureBox5->Visible = true;
            Bitmap^ image = previeww;
            Bitmap^ image2 = previeww2;
            int x = Math::Min(image->Width, image2->Width);
            int y = Math::Min(image->Height, image2->Height);
            Bitmap^ final = gcnew Bitmap(x, y);
            for (int i = 0; i < x; i++) {
                for (int j = 0; j < y; j++) {
                    Color c1 = image->GetPixel(i, j);
                    Color c2 = image2->GetPixel(i, j);
                    Color neww = Color::FromArgb((c1.R + c2.R) / 2, (c1.G + c2.G) / 2, (c1.B + c2.B) / 2);
                    final->SetPixel(i, j, neww);
                }
            }
            pictureBox5->Visible = false;
            label12->Visible = false;
            button20->Visible = false;
            button21->Visible = false;
            pictureBox3->Visible = false;
            button19->Visible = false;
            previeww = final;
            pictureBox2->Image = final;
        }
        else {
            label3->Text = "Please load an image";
        }
    }
    private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
        if (loaded) {
            label12->Visible = false;
            pictureBox5->Visible = true;
            Bitmap^ image = previeww;
            Bitmap^ image2 = previeww2;
            int x = Math::Min(image->Width, image2->Width);
            int y = Math::Min(image->Height, image2->Height);
            int wid = x;
            int hiet = y;
            Bitmap^ potatos = gcnew Bitmap(wid, hiet);
            Bitmap^ potatos2 = gcnew Bitmap(wid, hiet);
            for (int i = 0; i < potatos->Width; ++i) {
                for (int j = 0; j < potatos->Height; ++j) {
                    int w = i * image->Width / potatos->Width;
                    int h = j * image->Height / potatos->Height;
                    w = Math::Min(w, image->Width - 1);
                    h = Math::Min(h, image->Height - 1);
                    Color c = image->GetPixel(w, h);
                    potatos->SetPixel(i, j, c);
                }
            }
            for (int i = 0; i < potatos2->Width; ++i) {
                for (int j = 0; j < potatos2->Height; ++j) {
                    int w = i * image2->Width / potatos2->Width;
                    int h = j * image2->Height / potatos2->Height;
                    w = Math::Min(w, image2->Width - 1);
                    h = Math::Min(h, image2->Height - 1);
                    Color c = image2->GetPixel(w, h);
                    potatos2->SetPixel(i, j, c);
                }
            }
            Bitmap^ final = gcnew Bitmap(x, y);
            for (int i = 0; i < x; i++) {
                for (int j = 0; j < y; j++) {
                    Color c1 = potatos->GetPixel(i, j);
                    Color c2 = potatos2->GetPixel(i, j);
                    Color neww = Color::FromArgb((c1.R + c2.R) / 2, (c1.G + c2.G) / 2, (c1.B + c2.B) / 2);
                    final->SetPixel(i, j, neww);
                }
            }
            pictureBox5->Visible = false;
            label12->Visible = false;
            button20->Visible = false;
            button21->Visible = false;
            pictureBox3->Visible = false;
            button19->Visible = false;
            previeww = final;
            pictureBox2->Image = final;
        }
        else {
            label3->Text = "Please load an image";
        }
    }
    private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
        if (loaded) {
            Bitmap^ image = previeww;
            pictureBox5->Visible = true;
            label12->Visible = false;
            for (int i = 0; i < image->Width; i++) {
                for (int j = 0; j < image->Height; j++) {
                    Color c = image->GetPixel(i, j);
                    int xR = rand() % 256 - 128 + c.R;
                    int xG = rand() % 256 - 128 + c.G;
                    int xB = rand() % 256 - 128 + c.B;
                    xR = (xR > 255) ? 255 : xR;
                    xG = (xG > 255) ? 255 : xG;
                    xB = (xB > 255) ? 255 : xB;
                    xR = (xR < 0) ? 0 : xR;
                    xG = (xG < 0) ? 0 : xG;
                    xB = (xB < 0) ? 0 : xB;
                    Color neww = Color::FromArgb(xR, xG, xB);
                    image->SetPixel(i, j, neww);
                }
            }
            pictureBox5->Visible = false;
            previeww = image;
            pictureBox2->Image = image;
        }
        else {
            label3->Text = "Please load an image";
        }
    }
    private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
        if (loaded) {
            trackBar1->Visible = false;
            button9->Visible = false;
            label13->Visible = false;
            textBox3->Visible = false;
            button16->Visible = false;
            textBox1->Visible = false;
            textBox2->Visible = false;
            label9->Visible = false;
            label10->Visible = false;
            button17->Visible = false;
            button19->Visible = false;
            button20->Visible = false; label27->Visible = false;
            button21->Visible = false;
            button24->Visible = false;
            button25->Visible = false;
            button26->Visible = false;
            trackBar2->Visible = false;
            button27->Visible = false;
            button31->Visible = false;
            textBox4->Visible = false;
            textBox5->Visible = false;
            button54->Visible = false;
            button55->Visible = false;
            button56->Visible = false;
            button57->Visible = false;
            button58->Visible = false;
            button59->Visible = false;
            label16->Visible = false;
            label17->Visible = false;
            textBox6->Visible = false;
            textBox7->Visible = false;
            label18->Visible = false;
            label19->Visible = false;
            label21->Visible = false;
            label22->Visible = false;
            button34->Visible = false;
            button35->Visible = false;
            button36->Visible = false;
            label23->Visible = false;
            button37->Visible = false;
            button38->Visible = false;
            button39->Visible = false;
            button40->Visible = false;
            button41->Visible = false;
            label24->Visible = false;
            button42->Visible = false;
            button43->Visible = false;
            button44->Visible = false;
            button45->Visible = false;
            button46->Visible = false;
            button47->Visible = false;
            label25->Visible = false;
            label26->Visible = false;
            button48->Visible = false;
            button49->Visible = false;
            button50->Visible = false;
            button51->Visible = false;
            button52->Visible = false;
            button53->Visible = false;
            button24->Visible = true;
            button25->Visible = true;
            button26->Visible = true;
            pictureBox3->Visible = false;
        }
        else {
            label3->Text = "Please load an image";
        }
    }
    private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
        if (loaded) {
            label12->Visible = false;
            pictureBox5->Visible = true;
            Bitmap^ image = previeww;
            Bitmap^ image2 = gcnew Bitmap(image->Height, image->Width);
            for (int i = 0; i < image->Width; ++i) {
                for (int j = 0; j < image->Height; ++j) {
                    Color c = image->GetPixel(i, j);
                    image2->SetPixel(j, i, c);
                }
            }
            pictureBox5->Visible = false;
            previeww = image2;
            pictureBox2->Image = image2;
            button24->Visible = false;
            button25->Visible = false;
            button26->Visible = false;
        }
        else {
            label3->Text = "Please load an image";
        }
    }
    private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
        if (loaded) {
            label12->Visible = false;
            pictureBox5->Visible = true;
            Bitmap^ image = previeww;
            Bitmap^ image2 = gcnew Bitmap(image->Height, image->Width);
            for (int i = 0; i < image->Width; ++i) {
                for (int j = 0; j < image->Height; ++j) {
                    Color c = image->GetPixel(i, j);
                    image2->SetPixel(image->Height - j - 1, image->Width - 1 - i, c);
                }
            }
            pictureBox5->Visible = false;
            previeww = image2;
            pictureBox2->Image = image2;
            button24->Visible = false;
            button25->Visible = false;
            button26->Visible = false;
        }
        else {
            label3->Text = "Please load an image";
        }
    }
    private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
        if (loaded) {
            label12->Visible = false;
            pictureBox5->Visible = true;
            Bitmap^ image = previeww;
            Bitmap^ image2 = gcnew Bitmap(image->Width, image->Height);
            for (int i = 0; i < image->Width; ++i) {
                for (int j = 0; j < image->Height; ++j) {
                    Color c = image->GetPixel(i, j);
                    image2->SetPixel(image->Width - i - 1, image->Height - 1 - j, c);
                }
            }
            pictureBox5->Visible = false;
            previeww = image2;
            pictureBox2->Image = image2;
            button24->Visible = false;
            button25->Visible = false;
            button26->Visible = false;
        }
        else {
            label3->Text = "Please load an image";
        }
    }
    private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
        if (loaded) {
            trackBar1->Visible = false;
            button9->Visible = false;
            label13->Visible = false;
            textBox3->Visible = false;
            button16->Visible = false; label27->Visible = false;
            textBox1->Visible = false;
            textBox2->Visible = false;
            label9->Visible = false;
            label10->Visible = false;
            button17->Visible = false;
            button19->Visible = false;
            button20->Visible = false;
            button21->Visible = false;
            pictureBox3->Visible = false;
            button24->Visible = false;
            button25->Visible = false;
            button26->Visible = false;
            trackBar2->Visible = false;
            button54->Visible = false;
            button55->Visible = false;
            button56->Visible = false;
            button57->Visible = false;
            button58->Visible = false;
            button59->Visible = false;
            button27->Visible = false;
            button31->Visible = false;
            textBox4->Visible = false;
            textBox5->Visible = false;
            label16->Visible = false;
            label17->Visible = false;
            textBox6->Visible = false;
            textBox7->Visible = false;
            label18->Visible = false;
            label19->Visible = false;
            label21->Visible = false;
            label22->Visible = false;
            button34->Visible = false;
            button35->Visible = false;
            button36->Visible = false;
            label23->Visible = false;
            button37->Visible = false;
            button38->Visible = false;
            button39->Visible = false;
            button40->Visible = false;
            button41->Visible = false;
            label24->Visible = false;
            button42->Visible = false;
            button43->Visible = false;
            button44->Visible = false;
            button45->Visible = false;
            button46->Visible = false;
            button47->Visible = false;
            label25->Visible = false;
            label26->Visible = false;
            button48->Visible = false;
            button49->Visible = false;
            button50->Visible = false;
            button51->Visible = false;
            button52->Visible = false;
            button53->Visible = false;
            trackBar2->Visible = true;
            button27->Visible = true;
        }
        else {
            label3->Text = "Please load an image";
        }
    }
    private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
        if (loaded) {
            label12->Visible = false;
            pictureBox5->Visible = true;
            Bitmap^ image = previeww;
            int percent = trackBar2->Value;
            int di[25] = { -2, -1, 0, 1, 2, -2, -1, 0, 1, 2, -2, -1, 0, 1, 2, -2, -1, 0, 1, 2, -2, -1, 0, 1, 2 };
            int dj[25] = { -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2 };
            for (int i = 0; i < image->Width; ++i) {
                for (int j = 0; j < image->Height; ++j) {
                    int sumr = 0; int sumg = 0; int sumb = 0;
                    int element = 0;
                    for (int l = 0; l < 25; l++) {

                        int x = i + di[l] * percent;
                        int y = j + dj[l] * percent;
                        if (x > image->Width - 1 || x < 0 || y > image->Height - 1 || y < 0) {
                            continue;
                        }

                        Color c = image->GetPixel(x, y);
                        sumr += c.R;
                        sumg += c.G;
                        sumb += c.B;
                        element++;
                    }
                    sumr /= element;
                    sumg /= element;
                    sumb /= element;
                    for (int l = 0; l < 25; l++) {
                        if (di[l] > image->Width - 1 || di[l] < 0 || dj[l] > image->Height - 1 || dj[l] < 0) {
                            continue;
                        }
                        Color neww = Color::FromArgb(sumr, sumg, sumb);
                        image->SetPixel(i, j, neww);

                    }
                }
            }
            pictureBox5->Visible = false;
            trackBar2->Visible = false;
            button27->Visible = false;
            previeww = image;
            pictureBox2->Image = image;
        }
        else {
            label3->Text = "Please load an image";
        }
    }
    private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {
        if (loaded) {
            label12->Visible = false;
            pictureBox5->Visible = true;
            Bitmap^ image = previeww;
            for (int i = 0; i < image->Width; ++i) {
                for (int j = 0; j < image->Height; ++j) {
                    Color x = image->GetPixel(i, j);
                    unsigned int avg = (x.R + x.G + x.B) / 3;
                    Color newColor = Color::FromArgb(avg, avg, avg);
                    image->SetPixel(i, j, newColor);
                    Color xx = image->GetPixel(i, j);
                    int rr = 255 - xx.R; int gg = 255 - xx.G; int bb = 255 - xx.B;
                    Color newColor2 = Color::FromArgb(rr, gg, bb);
                    int rrr = newColor2.R + (255 - newColor2.R);
                    Color newColor22 = Color::FromArgb(rrr, gg, bb);
                    image->SetPixel(i, j, newColor22);
                }
            }
            pictureBox5->Visible = false;
            previeww = image;
            pictureBox2->Image = image;
        }
        else {
            label3->Text = "Please load an image";
        }
    }
    private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e) {
        if (loaded) {
            trackBar1->Visible = false;
            button9->Visible = false;
            label13->Visible = false;
            textBox3->Visible = false;
            button16->Visible = false;
            textBox1->Visible = false;
            textBox2->Visible = false; label27->Visible = false;
            label9->Visible = false;
            label10->Visible = false;
            button17->Visible = false;
            button19->Visible = false;
            button20->Visible = false;
            button21->Visible = false;
            button24->Visible = false;
            button25->Visible = false;
            button26->Visible = false;
            trackBar2->Visible = false;
            button27->Visible = false;
            pictureBox3->Visible = false;
            button31->Visible = false;
            button54->Visible = false;
            button55->Visible = false;
            button56->Visible = false;
            button57->Visible = false;
            button58->Visible = false;
            button59->Visible = false;
            textBox4->Visible = false;
            textBox5->Visible = false;
            label16->Visible = false;
            label17->Visible = false;
            textBox6->Visible = false;
            textBox7->Visible = false;
            label18->Visible = false;
            label19->Visible = false;
            label21->Visible = false;
            label22->Visible = false;
            button34->Visible = false;
            button35->Visible = false;
            button36->Visible = false;
            label23->Visible = false;
            button37->Visible = false;
            button38->Visible = false;
            button39->Visible = false;
            button40->Visible = false;
            button41->Visible = false;
            label24->Visible = false;
            button42->Visible = false;
            button43->Visible = false;
            button44->Visible = false;
            button45->Visible = false;
            button46->Visible = false;
            button47->Visible = false;
            label25->Visible = false;
            label26->Visible = false;
            button48->Visible = false;
            button49->Visible = false;
            button50->Visible = false;
            button51->Visible = false;
            button52->Visible = false;
            button53->Visible = false;
            button31->Visible = true;
            textBox4->Visible = true;
            textBox5->Visible = true;
            label16->Visible = true;
            label17->Visible = true;
            textBox6->Visible = true;
            textBox7->Visible = true;
            label18->Visible = true;
            label19->Visible = true;
            label21->Visible = true;
            label22->Visible = true;
        }
        else {
            label3->Text = "Please load an image";
        }
    }
    private: System::Void button31_Click(System::Object^ sender, System::EventArgs^ e) {
        if (loaded) {
            int DWid = System::Convert::ToInt16(textBox5->Text);
            int DHiet = System::Convert::ToInt16(textBox4->Text);
            int wid = System::Convert::ToInt16(textBox6->Text);
            int hiet = System::Convert::ToInt16(textBox7->Text);
            label12->Visible = false;
            pictureBox5->Visible = true;
            Bitmap^ image = previeww;
            Bitmap^ potatos = gcnew Bitmap(wid, hiet);
            if (wid > image->Width || hiet > image->Height || (image->Height - DHiet) < hiet || (image->Width - DWid) < wid) {

            }
            else {
                for (int i = 0; i < potatos->Width; i++) {
                    for (int j = 0; j < potatos->Height; j++) {
                        Color c = image->GetPixel(i + DWid, j + DHiet);
                        potatos->SetPixel(i, j, c);
                    }
                }
            }
            pictureBox5->Visible = false;
            previeww = potatos;
            pictureBox2->Image = potatos;
            button31->Visible = false;
            textBox4->Visible = false;
            textBox5->Visible = false;
            label16->Visible = false;
            label17->Visible = false;
            textBox6->Visible = false;
            textBox7->Visible = false;
            label18->Visible = false;
            label19->Visible = false;
            label21->Visible = false;
            label22->Visible = false;
        }
        else {
            label3->Text = "Please load an image";
        }
    }
    private: System::Void button32_Click(System::Object^ sender, System::EventArgs^ e) {
        if (loaded) {
            SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
            saveFileDialog1->Filter = "PNG Image|*.png|JPEG Image|*.jpg|Bitmap Image|*.bmp| Targa raster graphic |*.tga";
            saveFileDialog1->Title = "Save an Image File";

            if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
                if (pictureBox2->Image != nullptr) {
                    pictureBox2->Image->Save(saveFileDialog1->FileName);
                }
            }
            label15->Visible = false;
            label14->Visible = false;
            label3->Text = "The image has been save successfully!";
        }
        else {
            label3->Text = "Please load an image";
        }
    }
    private: System::Void button33_Click(System::Object^ sender, System::EventArgs^ e) {
        if (loaded) {
            trackBar1->Visible = false;
            button9->Visible = false;
            label13->Visible = false;
            textBox3->Visible = false;
            button16->Visible = false;
            textBox1->Visible = false;
            textBox2->Visible = false;
            label9->Visible = false;
            label10->Visible = false;
            button17->Visible = false;
            button19->Visible = false;
            button20->Visible = false;
            button21->Visible = false;
            button24->Visible = false;
            button25->Visible = false;
            button26->Visible = false; label27->Visible = false;
            trackBar2->Visible = false;
            button27->Visible = false;
            pictureBox3->Visible = false;
            button31->Visible = false;
            textBox4->Visible = false;
            textBox5->Visible = false;
            label16->Visible = false;
            label17->Visible = false;
            textBox6->Visible = false;
            textBox7->Visible = false;
            button54->Visible = false;
            button55->Visible = false;
            button56->Visible = false;
            button57->Visible = false;
            button58->Visible = false;
            button59->Visible = false;
            label18->Visible = false;
            label19->Visible = false;
            label21->Visible = false;
            label22->Visible = false;
            button34->Visible = false;
            button35->Visible = false;
            button36->Visible = false;
            label23->Visible = false;
            button37->Visible = false;
            button38->Visible = false;
            button39->Visible = false;
            button40->Visible = false;
            button41->Visible = false;
            label24->Visible = false;
            button42->Visible = false;
            button43->Visible = false;
            button44->Visible = false;
            button45->Visible = false;
            button46->Visible = false;
            button47->Visible = false;
            label25->Visible = false;
            label26->Visible = false;
            button48->Visible = false;
            button49->Visible = false;
            button50->Visible = false;
            button51->Visible = false;
            button52->Visible = false;
            button53->Visible = false;
            button34->Visible = true;
            button35->Visible = true;
            button36->Visible = true;
            label23->Visible = true;
        }
        else {
            label3->Text = "Please load an image";
        }
    }
    private: System::Void button34_Click(System::Object^ sender, System::EventArgs^ e) {
        if (loaded) {
            trackBar1->Visible = false;
            button9->Visible = false;
            label13->Visible = false;
            textBox3->Visible = false;
            button16->Visible = false;
            textBox1->Visible = false;
            textBox2->Visible = false;
            label9->Visible = false;
            label10->Visible = false;
            button17->Visible = false;
            button19->Visible = false;
            button20->Visible = false;
            button21->Visible = false;
            button24->Visible = false;
            button25->Visible = false;
            button26->Visible = false;
            trackBar2->Visible = false;
            button27->Visible = false;
            button31->Visible = false;
            textBox4->Visible = false; label27->Visible = false;
            textBox5->Visible = false;
            button54->Visible = false;
            button55->Visible = false;
            button56->Visible = false;
            button57->Visible = false;
            button58->Visible = false;
            button59->Visible = false;
            label16->Visible = false;
            pictureBox3->Visible = false;
            label17->Visible = false;
            textBox6->Visible = false;
            textBox7->Visible = false;
            label18->Visible = false;
            label19->Visible = false;
            label21->Visible = false;
            label22->Visible = false;
            button34->Visible = false;
            button35->Visible = false;
            button36->Visible = false;
            label23->Visible = false;
            button37->Visible = false;
            button38->Visible = false;
            button39->Visible = false;
            button40->Visible = false;
            button41->Visible = false;
            label24->Visible = false;
            button42->Visible = false;
            button43->Visible = false;
            button44->Visible = false;
            button45->Visible = false;
            button46->Visible = false;
            button47->Visible = false;
            label25->Visible = false;
            label26->Visible = false;
            button48->Visible = false;
            button49->Visible = false;
            button50->Visible = false;
            button51->Visible = false;
            button52->Visible = false;
            button53->Visible = false;
            button34->Visible = false;
            button35->Visible = false;
            button36->Visible = false;
            label23->Visible = false;
            button37->Visible = true;
            button38->Visible = true;
            button39->Visible = true;
            button40->Visible = true;
            button41->Visible = true;
            label24->Visible = true;
        }
        else {
            label3->Text = "Please load an image";
        }
    }
    private: System::Void button37_Click(System::Object^ sender, System::EventArgs^ e) {
        if (loaded) {
            label12->Visible = false;
            pictureBox5->Visible = true;
            Bitmap^ image = previeww;
            for (int i = 0; i < image->Width; ++i) {
                for (int j = 0; j < image->Height; ++j) {
                    if ((i < 10 || i >= image->Width - 10 || j < 10 || j >= image->Height - 10)) {
                        Color c = Color::FromArgb(255, 0, 0);
                        image->SetPixel(i, j, c);
                    }
                }
            }
            pictureBox5->Visible = false;
            previeww = image;
            pictureBox2->Image = image;
            button37->Visible = false;
            button38->Visible = false;
            button39->Visible = false;
            button40->Visible = false;
            button41->Visible = false;
            label24->Visible = false;
        }
        else {
            label3->Text = "Please load an image";
        }
    }
    private: System::Void button38_Click(System::Object^ sender, System::EventArgs^ e) {
        if (loaded) {
            label12->Visible = false;
            pictureBox5->Visible = true;
            Bitmap^ image = previeww;
            for (int i = 0; i < image->Width; ++i) {
                for (int j = 0; j < image->Height; ++j) {
                    if ((i < 10 || i >= image->Width - 10 || j < 10 || j >= image->Height - 10)) {
                        Color c = Color::FromArgb(0, 255, 0);
                        image->SetPixel(i, j, c);
                    }
                }
            }
            pictureBox5->Visible = false;
            previeww = image;
            pictureBox2->Image = image;
            button37->Visible = false;
            button38->Visible = false;
            button39->Visible = false;
            button40->Visible = false;
            button41->Visible = false;
            label24->Visible = false;
        }
        else {
            label3->Text = "Please load an image";
        }
    }
    private: System::Void button39_Click(System::Object^ sender, System::EventArgs^ e) {
        if (loaded) {
            label12->Visible = false;
            pictureBox5->Visible = true;
            Bitmap^ image = previeww;
            for (int i = 0; i < image->Width; ++i) {
                for (int j = 0; j < image->Height; ++j) {
                    if ((i < 10 || i >= image->Width - 10 || j < 10 || j >= image->Height - 10)) {
                        Color c = Color::FromArgb(0, 0, 255);
                        image->SetPixel(i, j, c);
                    }
                }
            }
            pictureBox5->Visible = false;
            previeww = image;
            pictureBox2->Image = image;
            button37->Visible = false;
            button38->Visible = false;
            button39->Visible = false;
            button40->Visible = false;
            button41->Visible = false;
            label24->Visible = false;
        }
        else {
            label3->Text = "Please load an image";
        }
    }
    private: System::Void button40_Click(System::Object^ sender, System::EventArgs^ e) {
        if (loaded) {
            label12->Visible = false;
            pictureBox5->Visible = true;
            Bitmap^ image = previeww;
            for (int i = 0; i < image->Width; ++i) {
                for (int j = 0; j < image->Height; ++j) {
                    if ((i < 10 || i >= image->Width - 10 || j < 10 || j >= image->Height - 10)) {
                        Color c = Color::FromArgb(255, 255, 0);
                        image->SetPixel(i, j, c);
                    }
                }
            }
            pictureBox5->Visible = false;
            previeww = image;
            pictureBox2->Image = image;
            button37->Visible = false;
            button38->Visible = false;
            button39->Visible = false;
            button40->Visible = false;
            button41->Visible = false;
            label24->Visible = false;
        }
        else {
            label3->Text = "Please load an image";
        }
    }
    private: System::Void button41_Click(System::Object^ sender, System::EventArgs^ e) {
        if (loaded) {
            label12->Visible = false;
            pictureBox5->Visible = true;
            Bitmap^ image = previeww;
            for (int i = 0; i < image->Width; ++i) {
                for (int j = 0; j < image->Height; ++j) {
                    if ((i < 10 || i >= image->Width - 10 || j < 10 || j >= image->Height - 10)) {
                        Color c = Color::FromArgb(255, 94, 5);
                        image->SetPixel(i, j, c);
                    }
                }
            }
            pictureBox5->Visible = false;
            previeww = image;
            pictureBox2->Image = image;
            button37->Visible = false;
            button38->Visible = false;
            button39->Visible = false;
            button40->Visible = false;
            button41->Visible = false;
            label24->Visible = false;
        }
        else {
            label3->Text = "Please load an image";
        }
    }
    private: System::Void button35_Click(System::Object^ sender, System::EventArgs^ e) {
        if (loaded) {
            trackBar1->Visible = false;
            button9->Visible = false;
            label13->Visible = false;
            textBox3->Visible = false;
            button16->Visible = false;
            textBox1->Visible = false;
            textBox2->Visible = false;
            label9->Visible = false;
            label10->Visible = false;
            button17->Visible = false;
            button19->Visible = false;
            button20->Visible = false; label27->Visible = false;
            button21->Visible = false;
            button24->Visible = false;
            button25->Visible = false;
            button26->Visible = false;
            trackBar2->Visible = false;
            button27->Visible = false;
            button31->Visible = false;
            pictureBox3->Visible = false;
            textBox4->Visible = false;
            textBox5->Visible = false;
            label16->Visible = false;
            label17->Visible = false;
            textBox6->Visible = false;
            textBox7->Visible = false;
            label18->Visible = false;
            label19->Visible = false;
            label21->Visible = false;
            label22->Visible = false;
            button34->Visible = false;
            button35->Visible = false;
            button36->Visible = false;
            label23->Visible = false;
            button37->Visible = false;
            button38->Visible = false;
            button39->Visible = false;
            button40->Visible = false;
            button41->Visible = false;
            label24->Visible = false;
            button42->Visible = false;
            button43->Visible = false;
            button44->Visible = false;
            button45->Visible = false;
            button46->Visible = false;
            button47->Visible = false;
            label25->Visible = false;
            label26->Visible = false;
            button48->Visible = false;
            button49->Visible = false;
            button50->Visible = false;
            button51->Visible = false;
            button52->Visible = false;
            button53->Visible = false;
            button34->Visible = false;
            button35->Visible = false;
            button36->Visible = false;
            button42->Visible = true;
            button43->Visible = true;
            button44->Visible = true;
            button45->Visible = true;
            button54->Visible = false;
            button55->Visible = false;
            button56->Visible = false;
            button57->Visible = false;
            button58->Visible = false;
            button59->Visible = false;
            button46->Visible = true;
            button47->Visible = true;
            label25->Visible = true;
            label23->Visible = false;
        }
        else {
            label3->Text = "Please load an image";
        }
    }
    private: System::Void button42_Click(System::Object^ sender, System::EventArgs^ e) {
        if (loaded) {
            label26->Visible = true;
            button48->Visible = true;
            button49->Visible = true;
            button50->Visible = true;
            button51->Visible = true;
            button52->Visible = true;
            button53->Visible = true;
            label12->Visible = false;
            Bitmap^ image = previeww;
            for (int i = 0; i < image->Width; ++i) {
                for (int j = 0; j < image->Height; ++j) {
                    if ((i < 20 || i >= image->Width - 20 || j < 20 || j >= image->Height - 20)) {
                        Color c = Color::FromArgb(255, 0, 0);
                        image->SetPixel(i, j, c);
                    }
                }
            }
            previeww = image;
        }
        else {
            label3->Text = "Please load an image";
        }
    }
    private: System::Void button43_Click(System::Object^ sender, System::EventArgs^ e) {
        if (loaded) {
            label26->Visible = true;
            button48->Visible = true;
            button49->Visible = true;
            button50->Visible = true;
            button51->Visible = true;
            button52->Visible = true;
            button53->Visible = true;
            Bitmap^ image = previeww;
            for (int i = 0; i < image->Width; ++i) {
                for (int j = 0; j < image->Height; ++j) {
                    if ((i < 20 || i >= image->Width - 20 || j < 20 || j >= image->Height - 20)) {
                        Color c = Color::FromArgb(0, 255, 0);
                        image->SetPixel(i, j, c);
                    }
                }
            }
            previeww = image;
        }
        else {
            label3->Text = "Please load an image";
        }
    }
    private: System::Void button44_Click(System::Object^ sender, System::EventArgs^ e) {
        if (loaded) {
            label26->Visible = true;
            button48->Visible = true;
            button49->Visible = true;
            button50->Visible = true;
            button51->Visible = true;
            button52->Visible = true;
            button53->Visible = true;
            Bitmap^ image = previeww;
            for (int i = 0; i < image->Width; ++i) {
                for (int j = 0; j < image->Height; ++j) {
                    if ((i < 20 || i >= image->Width - 20 || j < 20 || j >= image->Height - 20)) {
                        Color c = Color::FromArgb(0, 0, 255);
                        image->SetPixel(i, j, c);
                    }
                }
            }
            previeww = image;
        }
        else {
            label3->Text = "Please load an image";
        }
    }
    private: System::Void button45_Click(System::Object^ sender, System::EventArgs^ e) {
        if (loaded) {
            label26->Visible = true;
            button48->Visible = true;
            button49->Visible = true;
            button50->Visible = true;
            button51->Visible = true;
            button52->Visible = true;
            button53->Visible = true;
            Bitmap^ image = previeww;
            for (int i = 0; i < image->Width; ++i) {
                for (int j = 0; j < image->Height; ++j) {
                    if ((i < 20 || i >= image->Width - 20 || j < 20 || j >= image->Height - 20)) {
                        Color c = Color::FromArgb(255, 255, 0);
                        image->SetPixel(i, j, c);
                    }
                }
            }
            previeww = image;
        }
        else {
            label3->Text = "Please load an image";
        }
    }
    private: System::Void button46_Click(System::Object^ sender, System::EventArgs^ e) {
        if (loaded) {
            label26->Visible = true;
            button48->Visible = true;
            button49->Visible = true;
            button50->Visible = true;
            button51->Visible = true;
            button52->Visible = true;
            button53->Visible = true;
            Bitmap^ image = previeww;
            for (int i = 0; i < image->Width; ++i) {
                for (int j = 0; j < image->Height; ++j) {
                    if ((i < 20 || i >= image->Width - 20 || j < 20 || j >= image->Height - 20)) {
                        Color c = Color::FromArgb(255, 94, 5);
                        image->SetPixel(i, j, c);
                    }
                }
            }
            previeww = image;
        }
        else {
            label3->Text = "Please load an image";
        }
    }
    private: System::Void button47_Click(System::Object^ sender, System::EventArgs^ e) {
        if (loaded) {
            label26->Visible = true;
            button48->Visible = true;
            button49->Visible = true;
            button50->Visible = true;
            button51->Visible = true;
            button52->Visible = true;
            button53->Visible = true;
            Bitmap^ image = previeww;
            for (int i = 0; i < image->Width; ++i) {
                for (int j = 0; j < image->Height; ++j) {
                    if ((i < 20 || i >= image->Width - 20 || j < 20 || j >= image->Height - 20)) {
                        Color c = Color::FromArgb(0, 0, 0);
                        image->SetPixel(i, j, c);
                    }
                }
            }
            previeww = image;
        }
        else {
            label3->Text = "Please load an image";
        }
    }
    private: System::Void button48_Click(System::Object^ sender, System::EventArgs^ e) {
        if (loaded) {
            pictureBox5->Visible = true;
            label12->Visible = false;
            Bitmap^ image = previeww;
            for (int i = 0; i < image->Width; ++i) {
                for (int j = 0; j < image->Height; ++j) {
                    if ((i < 10 || i >= image->Width - 10 || j < 10 || j >= image->Height - 10)) {
                        Color c = Color::FromArgb(255, 0, 0);
                        image->SetPixel(i, j, c);
                    }
                }
            }
            pictureBox5->Visible = false;
            previeww = image;
            pictureBox2->Image = image;
            label26->Visible = false;
            button48->Visible = false;
            button49->Visible = false;
            button50->Visible = false;
            button51->Visible = false;
            button52->Visible = false;
            button53->Visible = false;
            button42->Visible = false;
            button43->Visible = false;
            button44->Visible = false;
            button45->Visible = false;
            button46->Visible = false;
            button47->Visible = false;
            label25->Visible = false;
        }
        else {
            label3->Text = "Please load an image";
        }
    }
    private: System::Void button49_Click(System::Object^ sender, System::EventArgs^ e) {
        if (loaded) {
            label12->Visible = false;
            pictureBox5->Visible = true;
            Bitmap^ image = previeww;
            for (int i = 0; i < image->Width; ++i) {
                for (int j = 0; j < image->Height; ++j) {
                    if ((i < 10 || i >= image->Width - 10 || j < 10 || j >= image->Height - 10)) {
                        Color c = Color::FromArgb(0, 255, 0);
                        image->SetPixel(i, j, c);
                    }
                }
            }
            pictureBox5->Visible = false;
            previeww = image;
            pictureBox2->Image = image;
            label26->Visible = false;
            button48->Visible = false;
            button49->Visible = false;
            button50->Visible = false;
            button51->Visible = false;
            button52->Visible = false;
            button53->Visible = false;
            button42->Visible = false;
            button43->Visible = false;
            button44->Visible = false;
            button45->Visible = false;
            button46->Visible = false;
            button47->Visible = false;
            label25->Visible = false;
        }
        else {
            label3->Text = "Please load an image";
        }
    }
    private: System::Void button50_Click(System::Object^ sender, System::EventArgs^ e) {
        if (loaded) {
            label12->Visible = false;
            pictureBox5->Visible = true;
            Bitmap^ image = previeww;
            for (int i = 0; i < image->Width; ++i) {
                for (int j = 0; j < image->Height; ++j) {
                    if ((i < 10 || i >= image->Width - 10 || j < 10 || j >= image->Height - 10)) {
                        Color c = Color::FromArgb(0, 0, 255);
                        image->SetPixel(i, j, c);
                    }
                }
            }
            pictureBox5->Visible = false;
            previeww = image;
            pictureBox2->Image = image;
            label26->Visible = false;
            button48->Visible = false;
            button49->Visible = false;
            button50->Visible = false;
            button51->Visible = false;
            button52->Visible = false;
            button53->Visible = false;
            button42->Visible = false;
            button43->Visible = false;
            button44->Visible = false;
            button45->Visible = false;
            button46->Visible = false;
            button47->Visible = false;
            label25->Visible = false;
        }
        else {
            label3->Text = "Please load an image";
        }
    }
    private: System::Void button51_Click(System::Object^ sender, System::EventArgs^ e) {
        if (loaded) {
            label12->Visible = false;
            pictureBox5->Visible = true;
            Bitmap^ image = previeww;
            for (int i = 0; i < image->Width; ++i) {
                for (int j = 0; j < image->Height; ++j) {
                    if ((i < 10 || i >= image->Width - 10 || j < 10 || j >= image->Height - 10)) {
                        Color c = Color::FromArgb(255, 255, 0);
                        image->SetPixel(i, j, c);
                    }
                }
            }
            pictureBox5->Visible = false;
            previeww = image;
            pictureBox2->Image = image;
            label26->Visible = false;
            button48->Visible = false;
            button49->Visible = false;
            button50->Visible = false;
            button51->Visible = false;
            button52->Visible = false;
            button53->Visible = false;
            button42->Visible = false;
            button43->Visible = false;
            button44->Visible = false;
            button45->Visible = false;
            button46->Visible = false;
            button47->Visible = false;
            label25->Visible = false;
        }
        else {
            label3->Text = "Please load an image";
        }
    }
    private: System::Void button52_Click(System::Object^ sender, System::EventArgs^ e) {
        if (loaded) {
            label12->Visible = false;
            pictureBox5->Visible = true;
            Bitmap^ image = previeww;
            for (int i = 0; i < image->Width; ++i) {
                for (int j = 0; j < image->Height; ++j) {
                    if ((i < 10 || i >= image->Width - 10 || j < 10 || j >= image->Height - 10)) {
                        Color c = Color::FromArgb(255, 94, 5);
                        image->SetPixel(i, j, c);
                    }
                }
            }
            pictureBox5->Visible = false;
            previeww = image;
            pictureBox2->Image = image;
            label26->Visible = false;
            button48->Visible = false;
            button49->Visible = false;
            button50->Visible = false;
            button51->Visible = false;
            button52->Visible = false;
            button53->Visible = false;
            button42->Visible = false;
            button43->Visible = false;
            button44->Visible = false;
            button45->Visible = false;
            button46->Visible = false;
            button47->Visible = false;
            label25->Visible = false;
        }
        else {
            label3->Text = "Please load an image";
        }
    }
    private: System::Void button53_Click(System::Object^ sender, System::EventArgs^ e) {
        if (loaded) {
            label12->Visible = false;
            pictureBox5->Visible = true;
            Bitmap^ image = previeww;
            for (int i = 0; i < image->Width; ++i) {
                for (int j = 0; j < image->Height; ++j) {
                    if ((i < 10 || i >= image->Width - 10 || j < 10 || j >= image->Height - 10)) {
                        Color c = Color::FromArgb(0, 0, 0);
                        image->SetPixel(i, j, c);
                    }
                }
            }
            pictureBox5->Visible = false;
            previeww = image;
            pictureBox2->Image = image;
            label26->Visible = false;
            button48->Visible = false;
            button49->Visible = false;
            button50->Visible = false;
            button51->Visible = false;
            button52->Visible = false;
            button53->Visible = false;
            button42->Visible = false;
            button43->Visible = false;
            button44->Visible = false;
            button45->Visible = false;
            button46->Visible = false;
            button47->Visible = false;
            label25->Visible = false;
        }
        else {
            label3->Text = "Please load an image";
        }
    }
    private: System::Void button36_Click(System::Object^ sender, System::EventArgs^ e) {
        if (loaded) {
            button34->Visible = false;
            button35->Visible = false;
            button36->Visible = false;
            button54->Visible = true;
            button55->Visible = true;
            button56->Visible = true;
            button57->Visible = true;
            button58->Visible = true;
            button59->Visible = true;
            label27->Visible = true;
            label23->Visible = false;
        }
        else {
            label3->Text = "Please load an image";
        }
    }
    private: System::Void button54_Click(System::Object^ sender, System::EventArgs^ e) {
        if (loaded) {
            label12->Visible = false;
            pictureBox5->Visible = true;
            Bitmap^ image = previeww;
            for (int i = 0; i < image->Width; ++i) {
                for (int j = 0; j < image->Height; ++j) {
                    if ((i < 16 && j < 16 || i >= image->Width - 16 && j < 16 || j >= image->Height - 16 && i >= image->Width - 16 || j >= image->Height - 16 && i < 16)) {
                        Color c = Color::FromArgb(255, 0, 0);
                        image->SetPixel(i, j, c);
                    }
                    else if (i < 30 && j < 30 || i >= image->Width - 30 && j < 30 ||
                        j >= image->Height - 30 && i >= image->Width - 30 ||
                        j >= image->Height - 30 && i < 30) {
                    }
                    else if (i < 45 && j < 45 || i >= image->Width - 45 && j < 45 ||
                        j >= image->Height - 45 && i >= image->Width - 45 ||
                        j >= image->Height - 45 && i < 45) {
                        Color c = Color::FromArgb(255, 0, 0);
                        image->SetPixel(i, j, c);
                    }
                    else if ((i < 15 || i >= image->Width - 15 || j < 15 || j >= image->Height - 15)) {
                        Color c = Color::FromArgb(255, 0, 0);
                        image->SetPixel(i, j, c);
                    }
                }
            }
            pictureBox5->Visible = false;
            previeww = image;
            pictureBox2->Image = image;
            button54->Visible = false;
            button55->Visible = false;
            button56->Visible = false;
            button57->Visible = false;
            button58->Visible = false;
            button59->Visible = false;
            label27->Visible = false;
        }
        else {
            label3->Text = "Please load an image";
        }
    }
    private: System::Void button55_Click(System::Object^ sender, System::EventArgs^ e) {
        if (loaded) {
            label12->Visible = false;
            pictureBox5->Visible = true;
            Bitmap^ image = previeww;
            for (int i = 0; i < image->Width; ++i) {
                for (int j = 0; j < image->Height; ++j) {
                    if ((i < 16 && j < 16 || i >= image->Width - 16 && j < 16 || j >= image->Height - 16 && i >= image->Width - 16 || j >= image->Height - 16 && i < 16)) {
                        Color c = Color::FromArgb(0, 255, 0);
                        image->SetPixel(i, j, c);
                    }
                    else if (i < 30 && j < 30 || i >= image->Width - 30 && j < 30 ||
                        j >= image->Height - 30 && i >= image->Width - 30 ||
                        j >= image->Height - 30 && i < 30) {
                    }
                    else if (i < 45 && j < 45 || i >= image->Width - 45 && j < 45 ||
                        j >= image->Height - 45 && i >= image->Width - 45 ||
                        j >= image->Height - 45 && i < 45) {
                        Color c = Color::FromArgb(0, 255, 0);
                        image->SetPixel(i, j, c);
                    }
                    else if ((i < 15 || i >= image->Width - 15 || j < 15 || j >= image->Height - 15)) {
                        Color c = Color::FromArgb(0, 255, 0);
                        image->SetPixel(i, j, c);
                    }
                }
            }
            pictureBox5->Visible = false;
            previeww = image;
            pictureBox2->Image = image;
            button54->Visible = false;
            button55->Visible = false;
            button56->Visible = false;
            button57->Visible = false;
            button58->Visible = false;
            button59->Visible = false;
            label27->Visible = false;
        }
        else {
            label3->Text = "Please load an image";
        }
    }
    private: System::Void button56_Click(System::Object^ sender, System::EventArgs^ e) {
        if (loaded) {
            label12->Visible = false;
            pictureBox5->Visible = true;
            Bitmap^ image = previeww;
            for (int i = 0; i < image->Width; ++i) {
                for (int j = 0; j < image->Height; ++j) {
                    if ((i < 16 && j < 16 || i >= image->Width - 16 && j < 16 || j >= image->Height - 16 && i >= image->Width - 16 || j >= image->Height - 16 && i < 16)) {
                        Color c = Color::FromArgb(0, 0, 255);
                        image->SetPixel(i, j, c);
                    }
                    else if (i < 30 && j < 30 || i >= image->Width - 30 && j < 30 ||
                        j >= image->Height - 30 && i >= image->Width - 30 ||
                        j >= image->Height - 30 && i < 30) {
                    }
                    else if (i < 45 && j < 45 || i >= image->Width - 45 && j < 45 ||
                        j >= image->Height - 45 && i >= image->Width - 45 ||
                        j >= image->Height - 45 && i < 45) {
                        Color c = Color::FromArgb(0, 0, 255);
                        image->SetPixel(i, j, c);
                    }
                    else if ((i < 15 || i >= image->Width - 15 || j < 15 || j >= image->Height - 15)) {
                        Color c = Color::FromArgb(0, 0, 255);
                        image->SetPixel(i, j, c);
                    }
                }
            }
            pictureBox5->Visible = false;
            previeww = image;
            pictureBox2->Image = image;
            button54->Visible = false;
            button55->Visible = false;
            button56->Visible = false;
            button57->Visible = false;
            button58->Visible = false;
            button59->Visible = false;
            label27->Visible = false;
        }
        else {
            label3->Text = "Please load an image";
        }
    }
    private: System::Void button57_Click(System::Object^ sender, System::EventArgs^ e) {
        if (loaded) {
            label12->Visible = false;
            pictureBox5->Visible = true;
            Bitmap^ image = previeww;
            for (int i = 0; i < image->Width; ++i) {
                for (int j = 0; j < image->Height; ++j) {
                    if ((i < 16 && j < 16 || i >= image->Width - 16 && j < 16 || j >= image->Height - 16 && i >= image->Width - 16 || j >= image->Height - 16 && i < 16)) {
                        Color c = Color::FromArgb(255, 255, 0);
                        image->SetPixel(i, j, c);
                    }
                    else if (i < 30 && j < 30 || i >= image->Width - 30 && j < 30 ||
                        j >= image->Height - 30 && i >= image->Width - 30 ||
                        j >= image->Height - 30 && i < 30) {
                    }
                    else if (i < 45 && j < 45 || i >= image->Width - 45 && j < 45 ||
                        j >= image->Height - 45 && i >= image->Width - 45 ||
                        j >= image->Height - 45 && i < 45) {
                        Color c = Color::FromArgb(255, 255, 0);
                        image->SetPixel(i, j, c);
                    }
                    else if ((i < 15 || i >= image->Width - 15 || j < 15 || j >= image->Height - 15)) {
                        Color c = Color::FromArgb(255, 255, 0);
                        image->SetPixel(i, j, c);
                    }
                }
            }
            pictureBox5->Visible = false;
            previeww = image;
            pictureBox2->Image = image;
            button54->Visible = false;
            button55->Visible = false;
            button56->Visible = false;
            button57->Visible = false;
            button58->Visible = false;
            button59->Visible = false;
            label27->Visible = false;
        }
        else {
            label3->Text = "Please load an image";
        }
    }
    private: System::Void button58_Click(System::Object^ sender, System::EventArgs^ e) {
        if (loaded) {
            label12->Visible = false;
            pictureBox5->Visible = true;
            Bitmap^ image = previeww;
            for (int i = 0; i < image->Width; ++i) {
                for (int j = 0; j < image->Height; ++j) {
                    if ((i < 16 && j < 16 || i >= image->Width - 16 && j < 16 || j >= image->Height - 16 && i >= image->Width - 16 || j >= image->Height - 16 && i < 16)) {
                        Color c = Color::FromArgb(255, 94, 5);
                        image->SetPixel(i, j, c);
                    }
                    else if (i < 30 && j < 30 || i >= image->Width - 30 && j < 30 ||
                        j >= image->Height - 30 && i >= image->Width - 30 ||
                        j >= image->Height - 30 && i < 30) {
                    }
                    else if (i < 45 && j < 45 || i >= image->Width - 45 && j < 45 ||
                        j >= image->Height - 45 && i >= image->Width - 45 ||
                        j >= image->Height - 45 && i < 45) {
                        Color c = Color::FromArgb(255, 94, 5);
                        image->SetPixel(i, j, c);
                    }
                    else if ((i < 15 || i >= image->Width - 15 || j < 15 || j >= image->Height - 15)) {
                        Color c = Color::FromArgb(255, 94, 5);
                        image->SetPixel(i, j, c);
                    }
                }
            }
            pictureBox5->Visible = false;
            previeww = image;
            pictureBox2->Image = image;
            button54->Visible = false;
            button55->Visible = false;
            button56->Visible = false;
            button57->Visible = false;
            button58->Visible = false;
            button59->Visible = false;
            label27->Visible = false;
        }
        else {
            label3->Text = "Please load an image";
        }
    }
    private: System::Void button59_Click(System::Object^ sender, System::EventArgs^ e) {
        if (loaded) {
            label12->Visible = false;
            pictureBox5->Visible = true;
            Bitmap^ image = previeww;
            for (int i = 0; i < image->Width; ++i) {
                for (int j = 0; j < image->Height; ++j) {
                    if ((i < 16 && j < 16 || i >= image->Width - 16 && j < 16 || j >= image->Height - 16 && i >= image->Width - 16 || j >= image->Height - 16 && i < 16)) {
                        Color c = Color::FromArgb(0, 0, 0);
                        image->SetPixel(i, j, c);
                    }
                    else if (i < 30 && j < 30 || i >= image->Width - 30 && j < 30 ||
                        j >= image->Height - 30 && i >= image->Width - 30 ||
                        j >= image->Height - 30 && i < 30) {
                    }
                    else if (i < 45 && j < 45 || i >= image->Width - 45 && j < 45 ||
                        j >= image->Height - 45 && i >= image->Width - 45 ||
                        j >= image->Height - 45 && i < 45) {
                        Color c = Color::FromArgb(0, 0, 0);
                        image->SetPixel(i, j, c);
                    }
                    else if ((i < 15 || i >= image->Width - 15 || j < 15 || j >= image->Height - 15)) {
                        Color c = Color::FromArgb(0, 0, 0);
                        image->SetPixel(i, j, c);
                    }
                }
            }
            pictureBox5->Visible = false;
            previeww = image;
            pictureBox2->Image = image;
            button54->Visible = false;
            button55->Visible = false;
            button56->Visible = false;
            button57->Visible = false;
            button58->Visible = false;
            button59->Visible = false;
            label27->Visible = false;
        }
        else {
            label3->Text = "Please load an image";
        }
    }
    private: System::Void button60_Click(System::Object^ sender, System::EventArgs^ e) {
        if (loaded) {
            trackBar1->Visible = false;
            button9->Visible = false;
            label13->Visible = false;
            textBox3->Visible = false;
            button16->Visible = false;
            textBox1->Visible = false;
            textBox2->Visible = false;
            label9->Visible = false;
            label10->Visible = false;
            button17->Visible = false;
            button19->Visible = false;
            button20->Visible = false;
            button21->Visible = false;
            button24->Visible = false;
            button25->Visible = false;
            button26->Visible = false;
            trackBar2->Visible = false;
            button27->Visible = false;
            button31->Visible = false;
            textBox4->Visible = false;
            textBox5->Visible = false;
            label16->Visible = false;
            label17->Visible = false;
            textBox6->Visible = false;
            textBox7->Visible = false;
            label18->Visible = false; label27->Visible = false;
            label19->Visible = false;
            label21->Visible = false;
            label22->Visible = false;
            button34->Visible = false;
            button35->Visible = false;
            button36->Visible = false;
            label23->Visible = false;
            button37->Visible = false;
            button38->Visible = false;
            button39->Visible = false;
            button40->Visible = false;
            button41->Visible = false;
            label24->Visible = false;
            button54->Visible = false;
            button55->Visible = false;
            button56->Visible = false;
            button57->Visible = false;
            button58->Visible = false;
            button59->Visible = false;
            button42->Visible = false;
            button43->Visible = false;
            button44->Visible = false;
            button45->Visible = false;
            button46->Visible = false;
            button47->Visible = false;
            label25->Visible = false;
            label26->Visible = false;
            button48->Visible = false;
            button49->Visible = false;
            button50->Visible = false;
            button51->Visible = false;
            button52->Visible = false;
            button53->Visible = false;
            pictureBox3->Visible = false;
            label12->Visible = false;
            pictureBox5->Visible = true;
            Bitmap^ image = previeww;
            for (int i = 0; i < image->Width; ++i) {
                for (int j = 0; j < image->Height; ++j) {
                    Color c = image->GetPixel(i, j);
                    int R = min((c.R * .263 + c.G * .729 + c.B * .233), 255);
                    int G = min((c.R * .400 + c.G * .466 + c.B * .138), 255);
                    int B = min((c.R * .315 + c.G * .315 + c.B * .121), 255);
                    Color neww = Color::FromArgb(R, G, B);
                    image->SetPixel(i, j, neww);
                }
            }
            pictureBox5->Visible = false;
            previeww = image;
            pictureBox2->Image = image;
        }
        else {
            label3->Text = "Please load an image";
        }
    }
    private: System::Void button61_Click(System::Object^ sender, System::EventArgs^ e) {
        if (loaded) {
            trackBar1->Visible = false;
            button9->Visible = false;
            label13->Visible = false;
            textBox3->Visible = false;
            button16->Visible = false;
            textBox1->Visible = false;
            textBox2->Visible = false;
            label9->Visible = false;
            label10->Visible = false;
            button17->Visible = false;
            button19->Visible = false;
            button20->Visible = false;
            button21->Visible = false;
            button24->Visible = false;
            button25->Visible = false; label27->Visible = false;
            button26->Visible = false;
            button54->Visible = false;
            button55->Visible = false;
            button56->Visible = false;
            button57->Visible = false;
            button58->Visible = false;
            button59->Visible = false;
            trackBar2->Visible = false;
            button27->Visible = false;
            button31->Visible = false;
            textBox4->Visible = false;
            textBox5->Visible = false;
            label16->Visible = false;
            label17->Visible = false;
            textBox6->Visible = false;
            textBox7->Visible = false;
            label18->Visible = false;
            label19->Visible = false;
            label21->Visible = false;
            label22->Visible = false;
            button34->Visible = false;
            button35->Visible = false;
            button36->Visible = false;
            label23->Visible = false;
            button37->Visible = false;
            button38->Visible = false;
            button39->Visible = false;
            button40->Visible = false;
            button41->Visible = false;
            label24->Visible = false;
            button42->Visible = false;
            button43->Visible = false;
            button44->Visible = false;
            button45->Visible = false;
            button46->Visible = false;
            button47->Visible = false;
            label25->Visible = false;
            label26->Visible = false;
            button48->Visible = false;
            button49->Visible = false;
            button50->Visible = false;
            button51->Visible = false;
            button52->Visible = false;
            button53->Visible = false;
            pictureBox3->Visible = false;
            label12->Visible = false;
            pictureBox5->Visible = true;
            Bitmap^ image = previeww;
            for (int i = 0; i < image->Width; ++i) {
                for (int j = 0; j < image->Height; ++j) {
                    Color c = image->GetPixel(i, j);
                    int r = c.R;
                    int g = c.G;
                    int b = c.B;
                    int newR = (((r + 10 / 2) + ((r + 10 / 2) % 10) - 1));
                    newR = (newR > 255) ? 255 : newR;
                    newR = (newR < 0) ? 0 : newR;
                    int newB = (((b + 10 / 2) + (b + 10 / 2) % 10) - 1);
                    newB = (newB > 255) ? 255 : newB;
                    newB = (newB < 0) ? 0 : newB;
                    int newG = (((g + 10 / 2) + (g + 10 / 2) % 10) - 1);
                    newG = (newG > 255) ? 255 : newG;
                    newB = (newG < 0) ? 0 : newG;
                    Color neww = Color::FromArgb(newR, newG, newB);
                    image->SetPixel(i, j, neww);
                }
            }
            pictureBox5->Visible = false;
            previeww = image;
            pictureBox2->Image = image;
        }
        else {
            label3->Text = "Please load an image";
        }
    }
    private: System::Void button62_Click(System::Object^ sender, System::EventArgs^ e) {
        if (loaded) {
            trackBar1->Visible = false;
            button9->Visible = false;
            label13->Visible = false;
            textBox3->Visible = false;
            button16->Visible = false;
            textBox1->Visible = false;
            textBox2->Visible = false; label27->Visible = false;
            label9->Visible = false;
            button54->Visible = false;
            button55->Visible = false;
            button56->Visible = false;
            button57->Visible = false;
            button58->Visible = false;
            button59->Visible = false;
            label10->Visible = false;
            button17->Visible = false;
            button19->Visible = false;
            trackBar1->Visible = false;
            button9->Visible = false;
            label13->Visible = false;
            textBox3->Visible = false;
            button16->Visible = false;
            textBox1->Visible = false;
            textBox2->Visible = false;
            label9->Visible = false;
            label10->Visible = false;
            button17->Visible = false;
            button19->Visible = false;
            button20->Visible = false;
            button21->Visible = false;
            button24->Visible = false;
            button25->Visible = false;
            button26->Visible = false;
            trackBar2->Visible = false;
            button27->Visible = false;
            button31->Visible = false;
            textBox4->Visible = false;
            textBox5->Visible = false;
            label16->Visible = false;
            label17->Visible = false;
            textBox6->Visible = false;
            textBox7->Visible = false;
            label18->Visible = false;
            label19->Visible = false;
            label21->Visible = false;
            label22->Visible = false;
            button34->Visible = false;
            button35->Visible = false;
            button36->Visible = false;
            label23->Visible = false;
            button37->Visible = false;
            button38->Visible = false;
            button39->Visible = false;
            button40->Visible = false;
            button41->Visible = false;
            label24->Visible = false;
            button42->Visible = false;
            button43->Visible = false;
            button44->Visible = false;
            button45->Visible = false;
            button46->Visible = false;
            button47->Visible = false;
            label25->Visible = false;
            label26->Visible = false;
            button48->Visible = false;
            button49->Visible = false;
            button50->Visible = false;
            button51->Visible = false;
            button52->Visible = false;
            button53->Visible = false;
            pictureBox3->Visible = false;
            button20->Visible = false;
            button21->Visible = false;
            button24->Visible = false;
            button25->Visible = false;
            button26->Visible = false;
            trackBar2->Visible = false;
            button27->Visible = false;
            button31->Visible = false;
            textBox4->Visible = false;
            textBox5->Visible = false;
            label16->Visible = false;
            label17->Visible = false;
            textBox6->Visible = false;
            textBox7->Visible = false;
            label18->Visible = false;
            label19->Visible = false;
            label21->Visible = false;
            label22->Visible = false;
            button34->Visible = false;
            button35->Visible = false;
            button36->Visible = false;
            label23->Visible = false;
            button37->Visible = false;
            button38->Visible = false;
            button39->Visible = false;
            button40->Visible = false;
            button41->Visible = false;
            label24->Visible = false;
            button42->Visible = false;
            button43->Visible = false;
            button44->Visible = false;
            button45->Visible = false;
            button46->Visible = false;
            button47->Visible = false;
            label25->Visible = false;
            label26->Visible = false;
            button48->Visible = false;
            button49->Visible = false;
            button50->Visible = false;
            button51->Visible = false;
            button52->Visible = false;
            button53->Visible = false;
            pictureBox3->Visible = false;
            label12->Visible = false;
            pictureBox5->Visible = true;
            int oilpaintnomber = 20;
            Bitmap^ image = previeww;
            Bitmap^ result = gcnew Bitmap(image->Width, image->Height);
            for (int i = 0; i < image->Width; ++i) {
                for (int j = 0; j < image->Height; ++j) {
                    int arrred[21] = { 0 };
                    int arrgrn[21] = { 0 };
                    int arrblu[21] = { 0 };
                    int arrlvlcnt[21] = { 0 };
                    for (int l = -5; l <= 5; ++l) {
                        for (int k = -5; k <= 5; ++k) {
                            int curX = i + l;
                            int curY = j + k;
                            if (curX > image->Width - 1 || curX < 0 || curY > image->Height - 1 || curY < 0) {
                                continue;
                            }
                            Color c = image->GetPixel(curX, curY);
                            double(curIntensity) = ceil((int)((double)(c.R + c.G + c.B) / 3 * oilpaintnomber) / 255.0f);
                            int curInrdsggfd = curIntensity;
                            arrlvlcnt[curInrdsggfd]++;
                            arrred[curInrdsggfd] += c.R;
                            arrgrn[curInrdsggfd] += c.G;
                            arrblu[curInrdsggfd] += c.B;
                        }
                    }
                    int curmx = 0;
                    int maxindx = 0;
                    for (int k = 1; k <= oilpaintnomber; k++) {
                        if (arrlvlcnt[k] > curmx) {
                            curmx = arrlvlcnt[k];
                            maxindx = k;
                        }
                    }
                    Color neww = Color::FromArgb(arrred[maxindx] / curmx, arrgrn[maxindx] / curmx, arrblu[maxindx] / curmx);
                    result->SetPixel(i, j, neww);
                }
            }
            pictureBox5->Visible = false;
            previeww = result;
            pictureBox2->Image = result;
        }
        else {
            label3->Text = "Please load an image";
        }
    }
};
}
