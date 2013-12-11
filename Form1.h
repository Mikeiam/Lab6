#pragma once

namespace Lab1_Viual {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;



	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;









	protected: 






	private: System::Windows::Forms::Button^  button2;


	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;








	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;










	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Papyrus", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(28, 125);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(231, 75);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Calculate \r\nthe product";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(28, 91);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(121, 20);
			this->textBox2->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(28, 75);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(31, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Array";
			// 
			// label3
			// 
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label3->Font = (gcnew System::Drawing::Font(L"Papyrus", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(28, 226);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(288, 47);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Your product will be here  \r\n";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(272, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 37);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(155, 55);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(27, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Min ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(155, 79);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(27, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Max";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->textBox1->Location = System::Drawing::Point(28, 38);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(121, 20);
			this->textBox1->TabIndex = 11;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(25, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(145, 13);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Enter the number of elements";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(229, 147);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 13);
			this->label6->TabIndex = 13;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label7->Location = System::Drawing::Point(184, 55);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(45, 15);
			this->label7->TabIndex = 14;
			this->label7->Text = L"            ";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label8->Location = System::Drawing::Point(184, 77);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(45, 15);
			this->label8->TabIndex = 15;
			this->label8->Text = L"            ";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(357, 300);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button1);
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Sum";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private:
			static array<int>^ Arr = gcnew array<int>(50);
			static int dim=1;
    private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
            array<String^>^ as;
            array<Char>^ ar;
            ar=gcnew array<Char> (1);
            ar[0]=' ';
			if ((textBox1->Text->Length!=0)&&(textBox2->Text->Length!=0)){
			    dim=Convert::ToInt32(textBox1->Text);
				as=textBox2->Text->Split(ar);
                for(int i=0;i<dim;i++)
                      Arr[i]=Convert::ToInt32(as[i]);
		    }
			int min=Arr[0],imin=0;
			int max=Arr[0],imax=0;
			int product=1;
			for(int i=1;i<dim;i++){
				if(min>Arr[i]){
				    min=Arr[i];
					imin=i;
				}
				if(max<Arr[i]){
					max=Arr[i];
					imax=i;
				}
			}
			label7->Text=Convert::ToString(min);
			label8->Text=Convert::ToString(max);
			if(imin<imax)
				for(int i=imin+1;i<imax;i++)
					product=product*Arr[i];
			if(imin>imax)
				for(int i=imax+1;i<imin;i++)
					product=product*Arr[i];
			if(min==max)
				product=0;
			if((imin==imax+1)||(imin==imax-1)||(imax==imin+1)||(imax==imin-1))
				product=0;
			if((product>0)||(product<0))
				label3->Text="Your product is "+Convert::ToString(product);		
			else
				label3->Text="Nothing to multiply - no product";	
					
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
         label1->Text="Your number of elements:"+textBox1->Text;
         label2->Text="Enter "+textBox1->Text+" elements";
		 }
};
}

