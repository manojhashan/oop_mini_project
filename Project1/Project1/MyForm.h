#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ newToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ saveToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ saveAsToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ editeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ copyToolStripMenuItem;

	private: System::Windows::Forms::ToolStripSeparator^ pastToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ undoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ redoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^ stylsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ cutToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ pastToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ selectAllToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ printToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ zoomInToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ zoomOutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ fontToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ fontColorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ backgroundColorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator2;
	private: System::Windows::Forms::FontDialog^ fontDialog1;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::PrintDialog^ printDialog1;


	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->saveToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveAsToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->copyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cutToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pastToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->selectAllToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pastToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->undoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->redoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->stylsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fontToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fontColorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->backgroundColorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->printToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zoomInToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zoomOutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->printDialog1 = (gcnew System::Windows::Forms::PrintDialog());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTextBox1->Location = System::Drawing::Point(0, 24);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(563, 231);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox1_TextChanged);
			this->richTextBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::richTextBox1_KeyPress);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->fileToolStripMenuItem,
					this->editeToolStripMenuItem, this->stylsToolStripMenuItem, this->aboutToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(563, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->newToolStripMenuItem,
					this->openToolStripMenuItem, this->saveToolStripMenuItem, this->saveToolStripMenuItem1, this->saveAsToolStripMenuItem1, this->toolStripSeparator1,
					this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// newToolStripMenuItem
			// 
			this->newToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"newToolStripMenuItem.Image")));
			this->newToolStripMenuItem->Name = L"newToolStripMenuItem";
			this->newToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::N));
			this->newToolStripMenuItem->Size = System::Drawing::Size(192, 22);
			this->newToolStripMenuItem->Text = L"New";
			this->newToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::newToolStripMenuItem_Click);
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"openToolStripMenuItem.Image")));
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
			this->openToolStripMenuItem->Size = System::Drawing::Size(192, 22);
			this->openToolStripMenuItem->Text = L"Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openToolStripMenuItem_Click);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(189, 6);
			// 
			// saveToolStripMenuItem1
			// 
			this->saveToolStripMenuItem1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"saveToolStripMenuItem1.Image")));
			this->saveToolStripMenuItem1->Name = L"saveToolStripMenuItem1";
			this->saveToolStripMenuItem1->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->saveToolStripMenuItem1->Size = System::Drawing::Size(192, 22);
			this->saveToolStripMenuItem1->Text = L"Save";
			this->saveToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::saveToolStripMenuItem1_Click);
			// 
			// saveAsToolStripMenuItem1
			// 
			this->saveAsToolStripMenuItem1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"saveAsToolStripMenuItem1.Image")));
			this->saveAsToolStripMenuItem1->Name = L"saveAsToolStripMenuItem1";
			this->saveAsToolStripMenuItem1->ShortcutKeys = static_cast<System::Windows::Forms::Keys>(((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Shift)
				| System::Windows::Forms::Keys::S));
			this->saveAsToolStripMenuItem1->Size = System::Drawing::Size(192, 22);
			this->saveAsToolStripMenuItem1->Text = L"Save As..";
			this->saveAsToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::saveAsToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(189, 6);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"exitToolStripMenuItem.Image")));
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(192, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// editeToolStripMenuItem
			// 
			this->editeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->copyToolStripMenuItem,
					this->cutToolStripMenuItem1, this->pastToolStripMenuItem1, this->selectAllToolStripMenuItem, this->pastToolStripMenuItem, this->undoToolStripMenuItem,
					this->redoToolStripMenuItem
			});
			this->editeToolStripMenuItem->Name = L"editeToolStripMenuItem";
			this->editeToolStripMenuItem->Size = System::Drawing::Size(39, 20);
			this->editeToolStripMenuItem->Text = L"Edit";
			// 
			// copyToolStripMenuItem
			// 
			this->copyToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"copyToolStripMenuItem.Image")));
			this->copyToolStripMenuItem->Name = L"copyToolStripMenuItem";
			this->copyToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::C));
			this->copyToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->copyToolStripMenuItem->Text = L"Copy";
			this->copyToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::copyToolStripMenuItem_Click);
			// 
			// cutToolStripMenuItem1
			// 
			this->cutToolStripMenuItem1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cutToolStripMenuItem1.Image")));
			this->cutToolStripMenuItem1->Name = L"cutToolStripMenuItem1";
			this->cutToolStripMenuItem1->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::X));
			this->cutToolStripMenuItem1->Size = System::Drawing::Size(180, 22);
			this->cutToolStripMenuItem1->Text = L"Cut";
			this->cutToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::cutToolStripMenuItem1_Click);
			// 
			// pastToolStripMenuItem1
			// 
			this->pastToolStripMenuItem1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pastToolStripMenuItem1.Image")));
			this->pastToolStripMenuItem1->Name = L"pastToolStripMenuItem1";
			this->pastToolStripMenuItem1->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::V));
			this->pastToolStripMenuItem1->Size = System::Drawing::Size(180, 22);
			this->pastToolStripMenuItem1->Text = L"Past";
			this->pastToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::pastToolStripMenuItem1_Click);
			// 
			// selectAllToolStripMenuItem
			// 
			this->selectAllToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"selectAllToolStripMenuItem.Image")));
			this->selectAllToolStripMenuItem->Name = L"selectAllToolStripMenuItem";
			this->selectAllToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::A));
			this->selectAllToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->selectAllToolStripMenuItem->Text = L"Select All";
			this->selectAllToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::selectAllToolStripMenuItem_Click);
			// 
			// pastToolStripMenuItem
			// 
			this->pastToolStripMenuItem->Name = L"pastToolStripMenuItem";
			this->pastToolStripMenuItem->Size = System::Drawing::Size(177, 6);
			// 
			// undoToolStripMenuItem
			// 
			this->undoToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"undoToolStripMenuItem.Image")));
			this->undoToolStripMenuItem->Name = L"undoToolStripMenuItem";
			this->undoToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Z));
			this->undoToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->undoToolStripMenuItem->Text = L"Undo";
			this->undoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::undoToolStripMenuItem_Click);
			// 
			// redoToolStripMenuItem
			// 
			this->redoToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"redoToolStripMenuItem.Image")));
			this->redoToolStripMenuItem->Name = L"redoToolStripMenuItem";
			this->redoToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>(((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Shift)
				| System::Windows::Forms::Keys::Z));
			this->redoToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->redoToolStripMenuItem->Text = L"Redo";
			this->redoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::redoToolStripMenuItem_Click);
			// 
			// stylsToolStripMenuItem
			// 
			this->stylsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->fontToolStripMenuItem,
					this->fontColorToolStripMenuItem, this->backgroundColorToolStripMenuItem, this->toolStripSeparator2, this->printToolStripMenuItem,
					this->zoomInToolStripMenuItem, this->zoomOutToolStripMenuItem
			});
			this->stylsToolStripMenuItem->Name = L"stylsToolStripMenuItem";
			this->stylsToolStripMenuItem->Size = System::Drawing::Size(49, 20);
			this->stylsToolStripMenuItem->Text = L"Styles";
			this->stylsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::stylsToolStripMenuItem_Click);
			// 
			// fontToolStripMenuItem
			// 
			this->fontToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"fontToolStripMenuItem.Image")));
			this->fontToolStripMenuItem->Name = L"fontToolStripMenuItem";
			this->fontToolStripMenuItem->Size = System::Drawing::Size(194, 22);
			this->fontToolStripMenuItem->Text = L"Font";
			this->fontToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::fontToolStripMenuItem_Click);
			// 
			// fontColorToolStripMenuItem
			// 
			this->fontColorToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"fontColorToolStripMenuItem.Image")));
			this->fontColorToolStripMenuItem->Name = L"fontColorToolStripMenuItem";
			this->fontColorToolStripMenuItem->Size = System::Drawing::Size(194, 22);
			this->fontColorToolStripMenuItem->Text = L"Font Color";
			this->fontColorToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::fontColorToolStripMenuItem_Click);
			// 
			// backgroundColorToolStripMenuItem
			// 
			this->backgroundColorToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"backgroundColorToolStripMenuItem.Image")));
			this->backgroundColorToolStripMenuItem->Name = L"backgroundColorToolStripMenuItem";
			this->backgroundColorToolStripMenuItem->Size = System::Drawing::Size(194, 22);
			this->backgroundColorToolStripMenuItem->Text = L"Background Color";
			this->backgroundColorToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::backgroundColorToolStripMenuItem_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(191, 6);
			// 
			// printToolStripMenuItem
			// 
			this->printToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"printToolStripMenuItem.Image")));
			this->printToolStripMenuItem->Name = L"printToolStripMenuItem";
			this->printToolStripMenuItem->Size = System::Drawing::Size(194, 22);
			this->printToolStripMenuItem->Text = L"Print";
			this->printToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::printToolStripMenuItem_Click);
			// 
			// zoomInToolStripMenuItem
			// 
			this->zoomInToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"zoomInToolStripMenuItem.Image")));
			this->zoomInToolStripMenuItem->Name = L"zoomInToolStripMenuItem";
			this->zoomInToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Up));
			this->zoomInToolStripMenuItem->Size = System::Drawing::Size(194, 22);
			this->zoomInToolStripMenuItem->Text = L"Zoom In";
			this->zoomInToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::zoomInToolStripMenuItem_Click);
			// 
			// zoomOutToolStripMenuItem
			// 
			this->zoomOutToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"zoomOutToolStripMenuItem.Image")));
			this->zoomOutToolStripMenuItem->Name = L"zoomOutToolStripMenuItem";
			this->zoomOutToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Down));
			this->zoomOutToolStripMenuItem->Size = System::Drawing::Size(194, 22);
			this->zoomOutToolStripMenuItem->Text = L"Zoom Out";
			this->zoomOutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::zoomOutToolStripMenuItem_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::aboutToolStripMenuItem_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->Filter = L"txt files (.txt)|.txt|All files (.)|.";
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->Filter = L"txt files (.txt)|.txt|All files (.)|.";
			this->saveFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::saveFileDialog1_FileOk);
			// 
			// printDialog1
			// 
			this->printDialog1->UseEXDialog = true;
			this->printDialog1->HelpRequest += gcnew System::EventHandler(this, &MyForm::printToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(563, 255);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Notepad_mini";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void saveAsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			StreamWriter^ sw = gcnew StreamWriter(saveFileDialog1->FileName);
			sw->Write(richTextBox1->Text);
			sw->Close();
		}
	}
private: System::Void toolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void newToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1 ->Text = "";
}
private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		StreamReader^ sr = gcnew StreamReader(openFileDialog1->FileName);
		richTextBox1->Text = sr->ReadToEnd();
		sr->Close();
	}
}

private: System::Void toolStripComboBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void toolStripComboBox1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void saveToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		StreamWriter^ sw = gcnew StreamWriter(saveFileDialog1->FileName);
		sw->Write(richTextBox1->Text);
		sw->Close();
	}
}
private: System::Void copyToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->Copy();
}
private: System::Void cutToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->Cut();
}
private: System::Void pastToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->Paste();
}
private: System::Void undoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (richTextBox1->CanUndo) {
		richTextBox1->Undo();
	}
}
private: System::Void redoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (richTextBox1->CanRedo) {
		richTextBox1->Redo();
	}
}
private: System::Void selectAllToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->SelectAll();
}
private: System::Void printToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	// Print the content of the richTextBox1 control
	System::Drawing::Printing::PrintDocument^ printDoc = gcnew System::Drawing::Printing::PrintDocument;
	printDoc->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &MyForm::printDocument_PrintPage);
	printDialog1->Document = printDoc;
	if (printDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		printDoc->Print();
	}
}
private: System::Void printDocument_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) {
	// Print the content of the richTextBox1 control
	e->Graphics->DrawString(richTextBox1->Text, richTextBox1->Font, System::Drawing::Brushes::Black, 100, 100);
}
private: System::Void zoomInToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	// Increase the font size of the richTextBox1 control
	richTextBox1->ZoomFactor += 0.1f; // Adjust the increment as needed
}
private: System::Void zoomOutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	// Decrease the font size of the richTextBox1 control
	richTextBox1->ZoomFactor -= 0.1f; // Adjust the decrement as needed
}

private: System::Void fontToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (fontDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		richTextBox1->Font = fontDialog1->Font;
	}
}
private: System::Void fontColorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (colorDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		richTextBox1->ForeColor = colorDialog1->Color;
	}
}
private: System::Void backgroundColorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (colorDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		richTextBox1->BackColor = colorDialog1->Color;
	}
}

private: System::Void richTextBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

	////////// Code BK Start

// Check if the pressed key is a letter
	if (Char::IsLetter(e->KeyChar)) {
		// If it's the first character or the previous character is a newline or period
		if (richTextBox1->Text->Length == 0 || richTextBox1->SelectionStart == 0 ||
			richTextBox1->Text[richTextBox1->SelectionStart - 1] == '\n' ||
			richTextBox1->Text[richTextBox1->SelectionStart - 1] == '.') {
			// Capitalize the letter
			e->KeyChar = Char::ToUpper(e->KeyChar);
		}
	}
	/*
	// Check if the pressed key is a period
	if (e->KeyChar == '.') {
		// Get the index of the period
		int periodIndex = richTextBox1->SelectionStart;

		// Check if the period is not the last character
		if (periodIndex < richTextBox1->Text->Length - 1) {
			// Insert a space after the period
			richTextBox1->Text = richTextBox1->Text->Insert(periodIndex + 1, " ");
			// Move the cursor to the next character position
			richTextBox1->SelectionStart = periodIndex + 2;
		}
	}
	*/
	////////// Code BK End
	////////// Other Code Start

	int cursorPosition = richTextBox1->SelectionStart;
	String^ inputText = richTextBox1->Text;



	// Capitalize the first letter of each sentence
	bool capitalizeNextLetter = true;
	for (int i = 0; i < inputText->Length; ++i) {
		if (capitalizeNextLetter && Char::IsLetter(inputText[i])) {
			inputText = inputText->Substring(0, i) + Char::ToUpper(inputText[i]) + inputText->Substring(i + 1);
			capitalizeNextLetter = false;
		}

		if (inputText[i] == '.') {
			capitalizeNextLetter = true;
		}
	}

	richTextBox1->Text = inputText;



	// Reset the font style for the entire text
	richTextBox1->SelectionStart = 0;
	richTextBox1->SelectionLength = richTextBox1->Text->Length;
	richTextBox1->SelectionFont = gcnew System::Drawing::Font(richTextBox1->Font, FontStyle::Regular);
	richTextBox1->SelectionColor = Color::Black; // Reset text color
	richTextBox1->SelectionLength = 0;

	// Find and underline areas around double spaces
	int startIndex = 0;
	while (startIndex < richTextBox1->Text->Length) {
		int doubleSpaceIndex = richTextBox1->Text->IndexOf("  ", startIndex);
		if (doubleSpaceIndex != -1) {
			// Reset formatting for characters before the double space
			int resetBeforeIndex = doubleSpaceIndex > 0 ? doubleSpaceIndex - 1 : 0;
			richTextBox1->SelectionStart = resetBeforeIndex;
			richTextBox1->SelectionLength = 1;
			richTextBox1->SelectionFont = gcnew System::Drawing::Font(richTextBox1->Font, FontStyle::Regular);
			richTextBox1->SelectionColor = Color::Black; // Reset text color
			richTextBox1->SelectionLength = 0;

			// Underline the area around the double space
			int startUnderline = doubleSpaceIndex;
			int lengthUnderline = 2;

			richTextBox1->SelectionStart = startUnderline;
			richTextBox1->SelectionLength = lengthUnderline;
			richTextBox1->SelectionFont = gcnew System::Drawing::Font(richTextBox1->Font, FontStyle::Underline | FontStyle::Bold); // Underline and make it bold
			richTextBox1->SelectionColor = Color::Red; // Set text color to red
			richTextBox1->SelectionLength = 0;

			// Reset formatting for characters after the double space
			int resetAfterIndex = doubleSpaceIndex + 2;
			if (resetAfterIndex < richTextBox1->Text->Length) {
				richTextBox1->SelectionStart = resetAfterIndex;
				richTextBox1->SelectionLength = 1;
				richTextBox1->SelectionFont = gcnew System::Drawing::Font(richTextBox1->Font, FontStyle::Regular);
				richTextBox1->SelectionColor = Color::Black; // Reset text color
				richTextBox1->SelectionLength = 0;
			}

			startIndex = resetAfterIndex;  // Move to the next position after the double space
		}
		else {
			break;  // No more double spaces found
		}
	}

	// Check for full stops without a single space following them
	for (int i = 0; i < richTextBox1->Text->Length - 1; ++i) {
		if (richTextBox1->Text[i] == '.') {
			// Check if there is no space immediately after the period
			if (i + 1 >= richTextBox1->Text->Length || richTextBox1->Text[i + 1] != ' ') {
				// Underline the area around the full stop in red
				richTextBox1->SelectionStart = i;
				richTextBox1->SelectionLength = 1;
				richTextBox1->SelectionFont = gcnew System::Drawing::Font(richTextBox1->Font, FontStyle::Underline | FontStyle::Bold); // Underline and make it bold
				richTextBox1->SelectionColor = Color::Red; // Set text color to red
				richTextBox1->SelectionLength = 0;
			}
		}
	}
	// Set the cursor position to the original position or the end of the text
	richTextBox1->SelectionStart = Math::Min(cursorPosition, richTextBox1->Text->Length);

////////// Other Code End

}
private: System::Void aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("This is My Notepad Application\nVersion 1.0\nCreated by Manoj Hashan");
}

private: System::Void saveFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
}
private: System::Void stylsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
