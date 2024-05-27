#pragma once
//#pragma warning()
#include<iostream>
#include <algorithm>
#include<string.h>
#include<string>
#include<ctime>
#include <cstdlib>
#include <unordered_map>
#include <algorithm>
#include <set>
#include<vector>
#include<msclr\marshal_cppstd.h>
#include <sstream>
#include<list>
#include"footballer.h"
#include"Player.h"


using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::getline;
using std::cout;
using namespace System;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;







namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Resources;



	/// <summary>
	/// Summary for MyForm
    /*bool myteam352bool = false;
    bool myteam424bool = false;
    bool myteam433bool = false;
    */
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();


            Player^ user1 = gcnew Player(1,100000,0,"Ssasa","SASA12");
            Player^ user2 = gcnew Player(2, 100000, 0, "malak", "malak");
            Player^ user3 = gcnew Player(3, 100000, 0, "monica", "662002");
            Player^ user4 = gcnew Player(4, 100000, 0, "mohanad", "1234");
            Player^ user5 = gcnew Player(5, 100000, 0, "makarious", "makarious");
            Player^ user6 = gcnew Player(6, 100000, 0, "manora", "123");
            

            Player^ userA = gcnew Player(5, 100000, -1, "Admin", "Admin");

            myList->Add(user1);
            myList->Add(user2);
            myList->Add(user3);
            myList->Add(user4);
            myList->Add(user5);
            myList->Add(user6);
            myList->Add(userA);


            
            footballer^ gk1 = gcnew footballer(10010,"La Liga","Barcelona","Ter stegen","Goalkeeper",12000,0);
            footballer^ gk2 = gcnew footballer(10021, "La Liga", "Atletico Madrid", "Jan Oblak", "Goalkeeper", 11500, 0);
            footballer^ gk3 = gcnew footballer(10032, "La Liga", "Real Madrid", "Thibaut Courtois", "Goalkeeper", 11000, 0);
            footballer^ gk4 = gcnew footballer(10065, "Premier", "Arsenal", "Ramsdale", "Goalkeeper", 10000, 0);
            footballer^ gk5 = gcnew footballer(10076, "Premier", "Manchester City", "Ederson", "Goalkeeper", 11000, 0);
            footballer^ gk6 = gcnew footballer(10087, "Premier", "New Castle", "Pope", "Goalkeeper", 100, 0);
            footballer^ gk7 = gcnew footballer(10098, "Premier", "Manchester United", "De Gea", "Goalkeeper", 12000, 0);
            footballer^ gk8 = gcnew footballer(10109, "Premier", "Tottenham", "Lloris", "Goalkeeper", 9500, 0);


            goalkeeper->Add(gk1);goalkeeper->Add(gk2);goalkeeper->Add(gk3);goalkeeper->Add(gk4);
            goalkeeper->Add(gk5);goalkeeper->Add(gk6);goalkeeper->Add(gk7);goalkeeper->Add(gk8);


            footballer^ fr1 = gcnew footballer(10000, "La Liga", "Barcelona", "Ferran Torres", "Forward", 500, 0);
            footballer^ fr2 = gcnew footballer(10001, "La Liga", "Barcelona", "Lewandowski", "Forward", 100, 0);
            footballer^ fr3 = gcnew footballer(10002, "La Liga", "Barcelona", "Raphina", "Forwrd", 11500, 0);
            footballer^ fr4 = gcnew footballer(10011, "La Liga", "Atletico Madrid", "Antoine Griezmann", "Forward", 8500, 0);
            footballer^ fr5 = gcnew footballer(10012, "La Liga", "Atletico Madrid", "Angel Correa", "Forward", 7500, 0);
            footballer^ fr6 = gcnew footballer(10022, "La Liga", "Real Madrid", "Vinicius", "Forward", 11500, 0);
            footballer^ fr7 = gcnew footballer(10023, "La Liga", "Real Madrid", "Karim Benzema", "Forward", 8000, 0);
            footballer^ fr8 = gcnew footballer(10024, "La Liga", "Real Madrid", "Marco Asensio", "Forward", 12000, 0);
            footballer^ fr9 = gcnew footballer(10055, "Premier", "Arsenal", "Martinelli", "Forward", 7500, 0);
            footballer^ fr10 = gcnew footballer(10056, "Premier", "Arsenal", "Jesus", "Forward", 12000, 0);
            footballer^ fr11 = gcnew footballer(10057, "Premier", "Arsenal", "Saka", "Forward", 11000, 0);
            footballer^ fr12 = gcnew footballer(10066, "Premier", "Manchester City", "Haaland", "Forward", 7000, 0);
            footballer^ fr13 = gcnew footballer(10067, "Premier", "Manchester City", "Grealish", "Forward", 11500, 0);
            footballer^ fr14 = gcnew footballer(10068, "Premier", "Manchester City", "Gundogan", "Forward", 8500, 0);
            footballer^ fr15 = gcnew footballer(10069, "Premier", "Manchester City", "De Bruyne", "Forward", 10000, 0);
            footballer^ fr16 = gcnew footballer(10070, "Premier", "Manchester City", "Bernardo", "Forward", 10500, 0);
            footballer^ fr17 = gcnew footballer(10077, "Premier", "New Castle", "Joelinton", "Forward", 12000, 0);
            footballer^ fr18 = gcnew footballer(10079, "Premier", "New Castle", "Murphy", "Forward", 8000, 0);
            footballer^ fr19 = gcnew footballer(10088, "Premier", "Manchester United", "Martial", "Forward", 7000, 0);
            footballer^ fr20 = gcnew footballer(10089, "Premier", "Manchester United", "Sancho", "Forward", 9000, 0);
            footballer^ fr21 = gcnew footballer(10090, "Premier", "Manchester United", "Sabitzer", "Forward", 11000, 0);
            footballer^ fr22 = gcnew footballer(10091, "Premier", "Manchester United", "Antony", "Forward", 8500, 0);
            footballer^ fr23 = gcnew footballer(10099, "Premier", "Tottenham", "Son", "Forward", 11000, 0);
            footballer^ fr24 = gcnew footballer(10100, "Premier", "Tottenham", "Kane", "Forward", 100000, 0);
            footballer^ fr25 = gcnew footballer(10101, "Premier", "Tottenham", "kulusevski", "Forward", 12000, 0);

            forward->Add(fr1);forward->Add(fr2);forward->Add(fr3);forward->Add(fr4);forward->Add(fr5);forward->Add(fr6);forward->Add(fr7);
            forward->Add(fr8);forward->Add(fr9);forward->Add(fr10);forward->Add(fr12);forward->Add(fr13);forward->Add(fr14);forward->Add(fr15);
            forward->Add(fr16);forward->Add(fr17);forward->Add(fr18);forward->Add(fr19);forward->Add(fr20);forward->Add(fr21);forward->Add(fr22);
            forward->Add(fr23);forward->Add(fr24);forward->Add(fr25);

            footballer^ mid1 = gcnew footballer(10003, "La Liga", "Barcelona", "Gavi", "Midfielder", 500, 0);
            footballer^ mid2 = gcnew footballer(10004, "La Liga", "Barcelona", "Sergio Busquets", "Midfielder", 8, 0);
            footballer^ mid3 = gcnew footballer(10005, "La Liga", "Barcelona", "Frenkie de Jong", "Midfielder",500, 0);
            footballer^ mid4 = gcnew footballer(10013, "La Liga", "Atletico Madrid", "Thomas Lemar", "Midfielder", 500, 0);
            footballer^ mid5 = gcnew footballer(10014, "La Liga", "Atletico Madrid", "Axel Witsel", "Midfielder", 500, 0);
            footballer^ mid6 = gcnew footballer(10015, "La Liga", "Atletico Madrid", "Rodrigo de Paul", "Midfielder", 9000, 0);
            footballer^ mid7 = gcnew footballer(10016, "La Liga", "Atletico Madrid", "Yannick Carrasco", "Midfielder", 11000, 0);
            footballer^ mid8 = gcnew footballer(10025, "La Liga", "Real Madrid", "Dani Ceballos", "Midfielder", 11500, 0);
            footballer^ mid9 = gcnew footballer(10026, "La Liga", "Real Madrid", "Aurelien Tchouameni", "Midfielder", 10500, 0);
            footballer^ mid10 = gcnew footballer(10027, "La Liga", "Real Madrid", "Federico Valverde", "Midfielder", 7500, 0);
            footballer^ mid11= gcnew footballer(10058, "Premier", "Arsenal", "Vieira", "Midfielder", 8500, 0);
            footballer^ mid12 = gcnew footballer(10059, "Premier", "Arsenal", "Partey", "Midfielder", 9000, 0);
            footballer^ mid13 = gcnew footballer(10060, "Premier", "Arsenal", "Degaard", "Midfielder", 10500, 0);
            footballer^ mid14 = gcnew footballer(10071, "Premier", "Manchester City", "Rodri", "Midfielder", 9500, 0);
            footballer^ mid15 = gcnew footballer(10072, "Premier", "Manchester City", "Stones", "Midfielder", 11000, 0);
            footballer^ mid16 = gcnew footballer(10080, "Premier", "New Castle", "Willock", "Midfielder", 9500, 0);
            footballer^ mid17 = gcnew footballer(10081, "Premier", "New Castle", "Guimaraes", "Midfielder", 11500, 0);
            footballer^ mid18 = gcnew footballer(10082, "Premier", "New Castle", "Longstaff", "Midfielder", 7000, 0);
            footballer^ mid19 = gcnew footballer(10092, "Premier", "Manchester United", "Eriksen", "Midfielder", 11000, 0);
            footballer^ mid20 = gcnew footballer(10093, "Premier", "Manchester United", "Casemiro", "Midfielder", 9500, 0);
            footballer^ mid21 = gcnew footballer(10102, "Premier", "Tottenham", "Hojbjerg", "Midfielder", 7500, 0);
            footballer^ mid22 = gcnew footballer(10103, "Premier", "Tottenham", "Skipp", "Midfielder", 8500, 0);
            footballer^ mid23 = gcnew footballer(10104, "Premier", "Tottenham", "Sarr", "Midfielder", 10000, 0);

            midfielder->Add(mid1);midfielder->Add(mid2);midfielder->Add(mid3);midfielder->Add(mid4);midfielder->Add(mid5);midfielder->Add(mid6);
            midfielder->Add(mid7);midfielder->Add(mid8);midfielder->Add(mid9);midfielder->Add(mid10);midfielder->Add(mid11);midfielder->Add(mid12);
            midfielder->Add(mid13);midfielder->Add(mid14);midfielder->Add(mid15);midfielder->Add(mid16);midfielder->Add(mid17);midfielder->Add(mid18);
            midfielder->Add(mid19);midfielder->Add(mid20);midfielder->Add(mid21);midfielder->Add(mid22);midfielder->Add(mid23);

            footballer^ def1 = gcnew footballer(10006, "La Liga", "Barcelona", "Alejandro Balde", "Defender", 500, 0);
            footballer^ def2 = gcnew footballer(10007, "La Liga", "Barcelona", "Marcos Alonso", "Defender", 500, 0);
            footballer^ def3 = gcnew footballer(10008, "La Liga", "Barcelona", "Ronald Araujo", "Defender", 700, 0);
            footballer^ def4 = gcnew footballer(10009, "La Liga", "Barcelona", "Jules Kounde", "Defender", 10500, 0);
            footballer^ def5 = gcnew footballer(10017, "La Liga", "Atletico Madrid", "Mario Hermoso", "Defender", 8500, 0);
            footballer^ def6 = gcnew footballer(10018, "La Liga", "Atletico Madrid", "Stefan Savic", "Defender", 10000, 0);
            footballer^ def7 = gcnew footballer(10019, "La Liga", "Atletico Madrid", "Gimenez", "Defender", 10500, 0);
            footballer^ def8 = gcnew footballer(10020, "La Liga", "Atletico Madrid", "Nahuel Molina", "Defender", 12000, 0);
            footballer^ def9 = gcnew footballer(10028, "La Liga", "Real Madrid", "Camavinga", "Defender", 8500, 0);
            footballer^ def10 = gcnew footballer(10029, "La Liga", "Real Madrid", "Anronio Rudiger", "Defender", 9000, 0);
            footballer^ def11 = gcnew footballer(10030, "La Liga", "Real Madrid", "Eder Militao", "Defender", 11500, 0);
            footballer^ def12 = gcnew footballer(10031, "La Liga", "Real Madrid", "Nacho", "Defender", 10500, 0);
            footballer^ def13 = gcnew footballer(10061, "Premier", "Arsenal", "Zinchenko", "Defender", 8000, 0);
            footballer^ def14 = gcnew footballer(10062, "Premier", "Arsenal", "Gabriel", "Defender", 7500, 0);
            footballer^ def15 = gcnew footballer(10063, "Premier", "Arsenal", "Holding", "Defender", 7000, 0);
            footballer^ def16 = gcnew footballer(10064, "Premier", "Arsenal", "White", "Defender", 9500, 0);
            footballer^ def17 = gcnew footballer(10083, "Premier", "New Castle", "Burn", "Defender", 7500, 0);
            footballer^ def18 = gcnew footballer(10084, "Premier", "New Castle", "Botman", "Defender", 8500, 0);
            footballer^ def19 = gcnew footballer(10085, "Premier", "New Castle", "Schar", "Defender", 12000, 0);
            footballer^ def20 = gcnew footballer(10086, "Premier", "New Castle", "Trippier", "Defender", 10000, 0);
            footballer^ def21 = gcnew footballer(10073, "Premier", "Manchester City", "Ake", "Defender", 7500, 0);
            footballer^ def22 = gcnew footballer(10074, "Premier", "Manchester City", "Dias", "Defender", 9000, 0);
            footballer^ def23 = gcnew footballer(10075, "Premier", "Manchester City", "Akanji", "Defender", 10000, 0);
            footballer^ def24 = gcnew footballer(10094, "Premier", "Manchester United", "Dalot", "Defender", 7500, 0);
            footballer^ def25 = gcnew footballer(10095, "Premier", "Manchester United", "Lindelof", "Defender", 10000, 0);
            footballer^ def26 = gcnew footballer(10096, "Premier", "Manchester United", "Maguire", "Defender", 8000, 0);
            footballer^ def27 = gcnew footballer(10097, "Premier", "Manchester United", "Wan Bissaka", "Defender", 11500, 0);
            footballer^ def28 = gcnew footballer(10105, "Premier", "Tottenham", "Perisic", "Defender", 11500, 0);
            footballer^ def29 = gcnew footballer(10106, "Premier", "Tottenham", "Dier", "Defender", 8000, 0);
            footballer^ def30 = gcnew footballer(10107, "Premier", "Tottenham", "Romero", "Defender", 9000, 0);
            footballer^ def31 = gcnew footballer(10108, "Premier", "Tottenham", "Porro", "Defender", 10500, 0);

            defender->Add(def1);defender->Add(def2);defender->Add(def3);defender->Add(def4);defender->Add(def5);defender->Add(def6);defender->Add(def7);
            defender->Add(def8);defender->Add(def9);defender->Add(def10);defender->Add(def11);defender->Add(def12);defender->Add(def13);defender->Add(def14);
            defender->Add(def15);defender->Add(def16);defender->Add(def17);defender->Add(def18);defender->Add(def19);defender->Add(def20);defender->Add(def21);
            defender->Add(def22);defender->Add(def23);defender->Add(def24);defender->Add(def25);defender->Add(def26);defender->Add(def27);defender->Add(def28);
            defender->Add(def29);defender->Add(def30);defender->Add(def31);


            for each (footballer ^ obj in forward) {
                searching->Add(obj->name,obj);
            }
            for each (footballer ^ obj in goalkeeper) {
                searching->Add(obj->name, obj);
            }
            for each (footballer ^ obj in defender) {
                searching->Add(obj->name, obj);
            }
            for each (footballer ^ obj in midfielder) {
                searching->Add(obj->name, obj);
            }

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
	private: System::Windows::Forms::Panel^ Start;
	protected:

	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ signin;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Panel^ reg;

	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;


	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Panel^ home;


    private:
        //System::Collections::Generic::List<Player^>^ myList;
        System::Collections::Generic::List<Player^>^ myList = gcnew System::Collections::Generic::List<Player^>();

        System::Collections::Generic::List<footballer^>^ goalkeeper = gcnew System::Collections::Generic::List<footballer^>();

        System::Collections::Generic::List<footballer^>^ defender = gcnew System::Collections::Generic::List<footballer^>();

        System::Collections::Generic::List<footballer^>^ midfielder = gcnew System::Collections::Generic::List<footballer^>();

        System::Collections::Generic::List<footballer^>^ forward = gcnew System::Collections::Generic::List<footballer^>();

       

    public:
        int x = 0;


        System::Collections::Generic::Dictionary<String^, footballer^>^ searching =gcnew System::Collections::Generic::Dictionary<String^, footballer^>();


	private: System::Windows::Forms::PictureBox^ pictureBox3;










































private: System::Windows::Forms::PictureBox^ pictureBox5;
private: System::Windows::Forms::TextBox^ textBox2;
private: System::Windows::Forms::Button^ button33;
private: System::Windows::Forms::Button^ button32;
private: System::Windows::Forms::Button^ button9;
private: System::Windows::Forms::Button^ button6;
private: System::Windows::Forms::PictureBox^ pictureBox9;
private: System::Windows::Forms::Panel^ MyTeam352;
private: System::Windows::Forms::Panel^ panel6;
private: System::Windows::Forms::PictureBox^ pictureBox10;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::PictureBox^ pictureBox11;
private: System::Windows::Forms::Panel^ panel7;




private: System::Windows::Forms::Button^ button37;








private: System::Windows::Forms::Panel^ transferbutton352;
private: System::Windows::Forms::Panel^ panel8;
private: System::Windows::Forms::PictureBox^ pictureBox12;
private: System::Windows::Forms::Label^ label13;

private: System::Windows::Forms::PictureBox^ pictureBox13;
private: System::Windows::Forms::Panel^ panel9;

private: System::Windows::Forms::Button^ button45;
private: System::Windows::Forms::Button^ button46;
private: System::Windows::Forms::Button^ button47;
private: System::Windows::Forms::Button^ button48;
private: System::Windows::Forms::Button^ button49;
private: System::Windows::Forms::Button^ button50;
private: System::Windows::Forms::Button^ button51;
private: System::Windows::Forms::Button^ button52;
private: System::Windows::Forms::Button^ button53;
private: System::Windows::Forms::Button^ button54;
private: System::Windows::Forms::Button^ button55;


















































private: System::Windows::Forms::Button^ button21;









































private: System::Windows::Forms::Panel^ Account;
private: System::Windows::Forms::TextBox^ textBox8;
private: System::Windows::Forms::TextBox^ textBox7;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::PictureBox^ pictureBox18;
private: System::Windows::Forms::ComboBox^ fcombo352one;

private: System::Windows::Forms::ComboBox^ keepercombo352;
private: System::Windows::Forms::ComboBox^ dcombo352three;

private: System::Windows::Forms::ComboBox^ dcombo352two;

private: System::Windows::Forms::ComboBox^ dcombo352one;

private: System::Windows::Forms::ComboBox^ mcombo352five;

private: System::Windows::Forms::ComboBox^ mcombo352four;

private: System::Windows::Forms::ComboBox^ mcombo352three;

private: System::Windows::Forms::ComboBox^ mcombo352two;

private: System::Windows::Forms::ComboBox^ mcombo352one;

private: System::Windows::Forms::ComboBox^ fcombo352two;
private: System::Windows::Forms::Label^ keeperlabel352;
private: System::Windows::Forms::Label^ dlabel352three;
private: System::Windows::Forms::Label^ dlabel352two;
private: System::Windows::Forms::Label^ dlabel352one;
private: System::Windows::Forms::Label^ mlabel352five;
private: System::Windows::Forms::Label^ mlabel352four;
private: System::Windows::Forms::Label^ mlabel352three;
private: System::Windows::Forms::Label^ mlabel352two;
private: System::Windows::Forms::Label^ mlabel352one;
private: System::Windows::Forms::Label^ flabel352two;
private: System::Windows::Forms::Label^ flabel352one;
private: System::Windows::Forms::PictureBox^ pictureBox19;
private: System::Windows::Forms::ListBox^ listBox1;
private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::Panel^ Admin;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Button^ button13;
private: System::Windows::Forms::Button^ button12;
private: System::Windows::Forms::Button^ button11;
private: System::Windows::Forms::Button^ button10;
private: System::Windows::Forms::TextBox^ textBox10;
private: System::Windows::Forms::TextBox^ textBox9;

private: System::Windows::Forms::PictureBox^ pictureBox4;
private: System::Windows::Forms::PictureBox^ pictureBox6;

private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::GroupBox^ groupBox1;
private: System::Windows::Forms::RadioButton^ radioButton4;
private: System::Windows::Forms::RadioButton^ radioButton3;
private: System::Windows::Forms::RadioButton^ radioButton2;
private: System::Windows::Forms::RadioButton^ radioButton1;
private: System::Windows::Forms::ComboBox^ comboBox1;

private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;










































	private:

	protected:






	protected:
















	protected:


	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
            this->Start = (gcnew System::Windows::Forms::Panel());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->signin = (gcnew System::Windows::Forms::Panel());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->reg = (gcnew System::Windows::Forms::Panel());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->textBox6 = (gcnew System::Windows::Forms::TextBox());
            this->textBox5 = (gcnew System::Windows::Forms::TextBox());
            this->textBox4 = (gcnew System::Windows::Forms::TextBox());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->home = (gcnew System::Windows::Forms::Panel());
            this->button8 = (gcnew System::Windows::Forms::Button());
            this->listBox1 = (gcnew System::Windows::Forms::ListBox());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
            this->button33 = (gcnew System::Windows::Forms::Button());
            this->button32 = (gcnew System::Windows::Forms::Button());
            this->button9 = (gcnew System::Windows::Forms::Button());
            this->button6 = (gcnew System::Windows::Forms::Button());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
            this->MyTeam352 = (gcnew System::Windows::Forms::Panel());
            this->panel6 = (gcnew System::Windows::Forms::Panel());
            this->label16 = (gcnew System::Windows::Forms::Label());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
            this->panel7 = (gcnew System::Windows::Forms::Panel());
            this->keeperlabel352 = (gcnew System::Windows::Forms::Label());
            this->dlabel352three = (gcnew System::Windows::Forms::Label());
            this->dlabel352two = (gcnew System::Windows::Forms::Label());
            this->dlabel352one = (gcnew System::Windows::Forms::Label());
            this->mlabel352five = (gcnew System::Windows::Forms::Label());
            this->mlabel352four = (gcnew System::Windows::Forms::Label());
            this->mlabel352three = (gcnew System::Windows::Forms::Label());
            this->mlabel352two = (gcnew System::Windows::Forms::Label());
            this->mlabel352one = (gcnew System::Windows::Forms::Label());
            this->flabel352two = (gcnew System::Windows::Forms::Label());
            this->flabel352one = (gcnew System::Windows::Forms::Label());
            this->button37 = (gcnew System::Windows::Forms::Button());
            this->transferbutton352 = (gcnew System::Windows::Forms::Panel());
            this->panel8 = (gcnew System::Windows::Forms::Panel());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->button21 = (gcnew System::Windows::Forms::Button());
            this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
            this->panel9 = (gcnew System::Windows::Forms::Panel());
            this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
            this->dcombo352three = (gcnew System::Windows::Forms::ComboBox());
            this->dcombo352two = (gcnew System::Windows::Forms::ComboBox());
            this->dcombo352one = (gcnew System::Windows::Forms::ComboBox());
            this->mcombo352five = (gcnew System::Windows::Forms::ComboBox());
            this->mcombo352four = (gcnew System::Windows::Forms::ComboBox());
            this->mcombo352three = (gcnew System::Windows::Forms::ComboBox());
            this->mcombo352two = (gcnew System::Windows::Forms::ComboBox());
            this->mcombo352one = (gcnew System::Windows::Forms::ComboBox());
            this->fcombo352two = (gcnew System::Windows::Forms::ComboBox());
            this->keepercombo352 = (gcnew System::Windows::Forms::ComboBox());
            this->fcombo352one = (gcnew System::Windows::Forms::ComboBox());
            this->button45 = (gcnew System::Windows::Forms::Button());
            this->button46 = (gcnew System::Windows::Forms::Button());
            this->button47 = (gcnew System::Windows::Forms::Button());
            this->button48 = (gcnew System::Windows::Forms::Button());
            this->button49 = (gcnew System::Windows::Forms::Button());
            this->button50 = (gcnew System::Windows::Forms::Button());
            this->button51 = (gcnew System::Windows::Forms::Button());
            this->button52 = (gcnew System::Windows::Forms::Button());
            this->button53 = (gcnew System::Windows::Forms::Button());
            this->button54 = (gcnew System::Windows::Forms::Button());
            this->button55 = (gcnew System::Windows::Forms::Button());
            this->Account = (gcnew System::Windows::Forms::Panel());
            this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
            this->label24 = (gcnew System::Windows::Forms::Label());
            this->textBox8 = (gcnew System::Windows::Forms::TextBox());
            this->textBox7 = (gcnew System::Windows::Forms::TextBox());
            this->Admin = (gcnew System::Windows::Forms::Panel());
            this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
            this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
            this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
            this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->button13 = (gcnew System::Windows::Forms::Button());
            this->button12 = (gcnew System::Windows::Forms::Button());
            this->button11 = (gcnew System::Windows::Forms::Button());
            this->button10 = (gcnew System::Windows::Forms::Button());
            this->textBox10 = (gcnew System::Windows::Forms::TextBox());
            this->textBox9 = (gcnew System::Windows::Forms::TextBox());
            this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
            this->Start->SuspendLayout();
            this->signin->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->reg->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            this->home->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
            this->MyTeam352->SuspendLayout();
            this->panel6->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
            this->panel7->SuspendLayout();
            this->transferbutton352->SuspendLayout();
            this->panel8->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
            this->panel9->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
            this->Account->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
            this->Admin->SuspendLayout();
            this->groupBox1->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
            this->SuspendLayout();
            // 
            // Start
            // 
            this->Start->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Start.BackgroundImage")));
            this->Start->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->Start->Controls->Add(this->button2);
            this->Start->Controls->Add(this->button1);
            this->Start->Dock = System::Windows::Forms::DockStyle::Fill;
            this->Start->Location = System::Drawing::Point(0, 0);
            this->Start->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->Start->Name = L"Start";
            this->Start->Size = System::Drawing::Size(1443, 838);
            this->Start->TabIndex = 0;
            this->Start->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::Start_Paint);
            // 
            // button2
            // 
            this->button2->BackColor = System::Drawing::Color::DarkViolet;
            this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button2->ForeColor = System::Drawing::Color::White;
            this->button2->Location = System::Drawing::Point(848, 635);
            this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(212, 59);
            this->button2->TabIndex = 1;
            this->button2->Text = L"REGISTER";
            this->button2->UseVisualStyleBackColor = false;
            this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::Color::DarkViolet;
            this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->ForeColor = System::Drawing::Color::White;
            this->button1->Location = System::Drawing::Point(389, 635);
            this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(212, 59);
            this->button1->TabIndex = 0;
            this->button1->Text = L"SIGN IN";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
            // 
            // signin
            // 
            this->signin->BackColor = System::Drawing::Color::Navy;
            this->signin->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"signin.BackgroundImage")));
            this->signin->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->signin->Controls->Add(this->pictureBox1);
            this->signin->Controls->Add(this->textBox1);
            this->signin->Controls->Add(this->label2);
            this->signin->Controls->Add(this->label1);
            this->signin->Controls->Add(this->richTextBox1);
            this->signin->Controls->Add(this->button3);
            this->signin->Dock = System::Windows::Forms::DockStyle::Fill;
            this->signin->Location = System::Drawing::Point(0, 0);
            this->signin->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->signin->Name = L"signin";
            this->signin->Size = System::Drawing::Size(1443, 838);
            this->signin->TabIndex = 1;
            // 
            // pictureBox1
            // 
            this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(13)),
                static_cast<System::Int32>(static_cast<System::Byte>(58)));
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(27, 23);
            this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(89, 87);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
            this->pictureBox1->TabIndex = 7;
            this->pictureBox1->TabStop = false;
            this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
            // 
            // textBox1
            // 
            this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox1->Location = System::Drawing::Point(60, 521);
            this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->textBox1->Multiline = true;
            this->textBox1->Name = L"textBox1";
            this->textBox1->PasswordChar = '*';
            this->textBox1->Size = System::Drawing::Size(400, 50);
            this->textBox1->TabIndex = 5;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(13)),
                static_cast<System::Int32>(static_cast<System::Byte>(58)));
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->ForeColor = System::Drawing::Color::White;
            this->label2->Location = System::Drawing::Point(49, 474);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(126, 24);
            this->label2->TabIndex = 4;
            this->label2->Text = L"PASSWORD";
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(13)),
                static_cast<System::Int32>(static_cast<System::Byte>(58)));
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::Color::White;
            this->label1->Location = System::Drawing::Point(49, 334);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(125, 24);
            this->label1->TabIndex = 3;
            this->label1->Text = L"USERNAME";
            this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
            // 
            // richTextBox1
            // 
            this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->richTextBox1->Location = System::Drawing::Point(60, 378);
            this->richTextBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->richTextBox1->Name = L"richTextBox1";
            this->richTextBox1->Size = System::Drawing::Size(400, 50);
            this->richTextBox1->TabIndex = 1;
            this->richTextBox1->Text = L"";
            // 
            // button3
            // 
            this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
                static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button3->ForeColor = System::Drawing::Color::White;
            this->button3->Location = System::Drawing::Point(347, 631);
            this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(237, 53);
            this->button3->TabIndex = 0;
            this->button3->Text = L"LOGIN";
            this->button3->UseVisualStyleBackColor = false;
            this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
            // 
            // reg
            // 
            this->reg->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"reg.BackgroundImage")));
            this->reg->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->reg->Controls->Add(this->pictureBox2);
            this->reg->Controls->Add(this->textBox6);
            this->reg->Controls->Add(this->textBox5);
            this->reg->Controls->Add(this->textBox4);
            this->reg->Controls->Add(this->label5);
            this->reg->Controls->Add(this->label4);
            this->reg->Controls->Add(this->label3);
            this->reg->Controls->Add(this->button5);
            this->reg->Dock = System::Windows::Forms::DockStyle::Fill;
            this->reg->ForeColor = System::Drawing::SystemColors::ActiveCaption;
            this->reg->Location = System::Drawing::Point(0, 0);
            this->reg->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->reg->Name = L"reg";
            this->reg->Size = System::Drawing::Size(1443, 838);
            this->reg->TabIndex = 2;
            // 
            // pictureBox2
            // 
            this->pictureBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(13)),
                static_cast<System::Int32>(static_cast<System::Byte>(58)));
            this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
            this->pictureBox2->Location = System::Drawing::Point(27, 23);
            this->pictureBox2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(89, 87);
            this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
            this->pictureBox2->TabIndex = 10;
            this->pictureBox2->TabStop = false;
            this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm::pictureBox2_Click);
            // 
            // textBox6
            // 
            this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox6->Location = System::Drawing::Point(49, 416);
            this->textBox6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->textBox6->Multiline = true;
            this->textBox6->Name = L"textBox6";
            this->textBox6->PasswordChar = '*';
            this->textBox6->Size = System::Drawing::Size(364, 43);
            this->textBox6->TabIndex = 9;
            // 
            // textBox5
            // 
            this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox5->Location = System::Drawing::Point(49, 311);
            this->textBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->textBox5->Multiline = true;
            this->textBox5->Name = L"textBox5";
            this->textBox5->Size = System::Drawing::Size(365, 44);
            this->textBox5->TabIndex = 8;
            this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
            // 
            // textBox4
            // 
            this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft New Tai Lue", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox4->Location = System::Drawing::Point(49, 534);
            this->textBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->textBox4->Multiline = true;
            this->textBox4->Name = L"textBox4";
            this->textBox4->PasswordChar = '*';
            this->textBox4->Size = System::Drawing::Size(364, 43);
            this->textBox4->TabIndex = 6;
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(13)),
                static_cast<System::Int32>(static_cast<System::Byte>(58)));
            this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->ForeColor = System::Drawing::Color::White;
            this->label5->Location = System::Drawing::Point(45, 496);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(226, 24);
            this->label5->TabIndex = 5;
            this->label5->Text = L"CONFIRM PASSWORD";
            this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(13)),
                static_cast<System::Int32>(static_cast<System::Byte>(58)));
            this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->ForeColor = System::Drawing::Color::White;
            this->label4->Location = System::Drawing::Point(45, 378);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(202, 24);
            this->label4->TabIndex = 4;
            this->label4->Text = L"ENTER PASSWORD";
            this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(13)),
                static_cast<System::Int32>(static_cast<System::Byte>(58)));
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->ForeColor = System::Drawing::Color::Silver;
            this->label3->Location = System::Drawing::Point(49, 274);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(201, 24);
            this->label3->TabIndex = 3;
            this->label3->Text = L"ENTER USERNAME";
            this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
            // 
            // button5
            // 
            this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
                static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button5->ForeColor = System::Drawing::Color::White;
            this->button5->Location = System::Drawing::Point(347, 635);
            this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button5->Name = L"button5";
            this->button5->Size = System::Drawing::Size(225, 47);
            this->button5->TabIndex = 0;
            this->button5->Text = L"Sign Up";
            this->button5->UseVisualStyleBackColor = false;
            this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
            // 
            // home
            // 
            this->home->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
                static_cast<System::Int32>(static_cast<System::Byte>(206)));
            this->home->Controls->Add(this->button8);
            this->home->Controls->Add(this->listBox1);
            this->home->Controls->Add(this->button4);
            this->home->Controls->Add(this->pictureBox9);
            this->home->Controls->Add(this->button33);
            this->home->Controls->Add(this->button32);
            this->home->Controls->Add(this->button9);
            this->home->Controls->Add(this->button6);
            this->home->Controls->Add(this->textBox2);
            this->home->Controls->Add(this->pictureBox5);
            this->home->Controls->Add(this->pictureBox3);
            this->home->Dock = System::Windows::Forms::DockStyle::Fill;
            this->home->Location = System::Drawing::Point(0, 0);
            this->home->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->home->Name = L"home";
            this->home->Size = System::Drawing::Size(1443, 838);
            this->home->TabIndex = 3;
            // 
            // button8
            // 
            this->button8->BackColor = System::Drawing::Color::White;
            this->button8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.BackgroundImage")));
            this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->button8->FlatAppearance->BorderSize = 0;
            this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button8->Location = System::Drawing::Point(1359, 34);
            this->button8->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->button8->Name = L"button8";
            this->button8->Size = System::Drawing::Size(48, 38);
            this->button8->TabIndex = 18;
            this->button8->UseVisualStyleBackColor = false;
            this->button8->Visible = false;
            this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click_1);
            // 
            // listBox1
            // 
            this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->listBox1->FormattingEnabled = true;
            this->listBox1->ItemHeight = 22;
            this->listBox1->Location = System::Drawing::Point(1149, 79);
            this->listBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->listBox1->Name = L"listBox1";
            this->listBox1->Size = System::Drawing::Size(233, 158);
            this->listBox1->TabIndex = 17;
            this->listBox1->Visible = false;
            // 
            // button4
            // 
            this->button4->BackColor = System::Drawing::Color::White;
            this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
            this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->button4->FlatAppearance->BorderSize = 0;
            this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button4->Location = System::Drawing::Point(1359, 34);
            this->button4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(48, 38);
            this->button4->TabIndex = 16;
            this->button4->UseVisualStyleBackColor = false;
            this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click_1);
            // 
            // pictureBox9
            // 
            this->pictureBox9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
                static_cast<System::Int32>(static_cast<System::Byte>(47)));
            this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
            this->pictureBox9->Location = System::Drawing::Point(1009, 23);
            this->pictureBox9->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->pictureBox9->Name = L"pictureBox9";
            this->pictureBox9->Size = System::Drawing::Size(51, 53);
            this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
            this->pictureBox9->TabIndex = 8;
            this->pictureBox9->TabStop = false;
            this->pictureBox9->Click += gcnew System::EventHandler(this, &MyForm::pictureBox9_Click);
            // 
            // button33
            // 
            this->button33->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
                static_cast<System::Int32>(static_cast<System::Byte>(47)));
            this->button33->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(47)));
            this->button33->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button33->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button33->ForeColor = System::Drawing::Color::White;
            this->button33->Location = System::Drawing::Point(884, 20);
            this->button33->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->button33->Name = L"button33";
            this->button33->Size = System::Drawing::Size(117, 66);
            this->button33->TabIndex = 7;
            this->button33->Text = L"Account";
            this->button33->UseVisualStyleBackColor = false;
            this->button33->Click += gcnew System::EventHandler(this, &MyForm::button33_Click);
            // 
            // button32
            // 
            this->button32->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
                static_cast<System::Int32>(static_cast<System::Byte>(47)));
            this->button32->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(47)));
            this->button32->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button32->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button32->ForeColor = System::Drawing::Color::White;
            this->button32->Location = System::Drawing::Point(465, 20);
            this->button32->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->button32->Name = L"button32";
            this->button32->Size = System::Drawing::Size(203, 66);
            this->button32->TabIndex = 6;
            this->button32->Text = L"Transfers  |";
            this->button32->UseVisualStyleBackColor = false;
            this->button32->Click += gcnew System::EventHandler(this, &MyForm::button32_Click);
            // 
            // button9
            // 
            this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
                static_cast<System::Int32>(static_cast<System::Byte>(47)));
            this->button9->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(47)));
            this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button9->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button9->ForeColor = System::Drawing::Color::White;
            this->button9->Location = System::Drawing::Point(676, 23);
            this->button9->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->button9->Name = L"button9";
            this->button9->Size = System::Drawing::Size(200, 66);
            this->button9->TabIndex = 5;
            this->button9->Text = L"Log out  |";
            this->button9->UseVisualStyleBackColor = false;
            this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click_1);
            // 
            // button6
            // 
            this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
                static_cast<System::Int32>(static_cast<System::Byte>(47)));
            this->button6->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(47)));
            this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button6->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button6->ForeColor = System::Drawing::Color::White;
            this->button6->Location = System::Drawing::Point(323, 22);
            this->button6->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->button6->Name = L"button6";
            this->button6->Size = System::Drawing::Size(139, 63);
            this->button6->TabIndex = 3;
            this->button6->Text = L"MyTeam  |";
            this->button6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->button6->UseVisualStyleBackColor = false;
            this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click_1);
            // 
            // textBox2
            // 
            this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox2->Location = System::Drawing::Point(1139, 46);
            this->textBox2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(212, 19);
            this->textBox2->TabIndex = 2;
            this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
            // 
            // pictureBox5
            // 
            this->pictureBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
                static_cast<System::Int32>(static_cast<System::Byte>(47)));
            this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
            this->pictureBox5->Location = System::Drawing::Point(4, -6);
            this->pictureBox5->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->pictureBox5->Name = L"pictureBox5";
            this->pictureBox5->Size = System::Drawing::Size(169, 96);
            this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox5->TabIndex = 1;
            this->pictureBox5->TabStop = false;
            // 
            // pictureBox3
            // 
            this->pictureBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
                static_cast<System::Int32>(static_cast<System::Byte>(206)));
            this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->pictureBox3->Cursor = System::Windows::Forms::Cursors::WaitCursor;
            this->pictureBox3->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
            this->pictureBox3->Location = System::Drawing::Point(0, 0);
            this->pictureBox3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->pictureBox3->Name = L"pictureBox3";
            this->pictureBox3->Size = System::Drawing::Size(1443, 838);
            this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox3->TabIndex = 0;
            this->pictureBox3->TabStop = false;
            this->pictureBox3->UseWaitCursor = true;
            this->pictureBox3->Click += gcnew System::EventHandler(this, &MyForm::pictureBox3_Click);
            // 
            // MyTeam352
            // 
            this->MyTeam352->BackColor = System::Drawing::Color::White;
            this->MyTeam352->Controls->Add(this->panel6);
            this->MyTeam352->Controls->Add(this->panel7);
            this->MyTeam352->Dock = System::Windows::Forms::DockStyle::Fill;
            this->MyTeam352->Location = System::Drawing::Point(0, 0);
            this->MyTeam352->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->MyTeam352->Name = L"MyTeam352";
            this->MyTeam352->Size = System::Drawing::Size(1443, 838);
            this->MyTeam352->TabIndex = 6;
            // 
            // panel6
            // 
            this->panel6->BackColor = System::Drawing::Color::DarkGreen;
            this->panel6->Controls->Add(this->label16);
            this->panel6->Controls->Add(this->label15);
            this->panel6->Controls->Add(this->pictureBox10);
            this->panel6->Controls->Add(this->label6);
            this->panel6->Controls->Add(this->label11);
            this->panel6->Controls->Add(this->pictureBox11);
            this->panel6->Location = System::Drawing::Point(0, 0);
            this->panel6->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->panel6->Name = L"panel6";
            this->panel6->Size = System::Drawing::Size(1443, 62);
            this->panel6->TabIndex = 1;
            // 
            // label16
            // 
            this->label16->AutoSize = true;
            this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label16->ForeColor = System::Drawing::Color::Gold;
            this->label16->Location = System::Drawing::Point(1064, 25);
            this->label16->Name = L"label16";
            this->label16->Size = System::Drawing::Size(95, 25);
            this->label16->TabIndex = 13;
            this->label16->Text = L"You have";
            // 
            // label15
            // 
            this->label15->AutoSize = true;
            this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label15->ForeColor = System::Drawing::Color::Gold;
            this->label15->Location = System::Drawing::Point(1251, 25);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(52, 25);
            this->label15->TabIndex = 12;
            this->label15->Text = L"PTS";
            // 
            // pictureBox10
            // 
            this->pictureBox10->BackColor = System::Drawing::Color::DarkGreen;
            this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
            this->pictureBox10->Location = System::Drawing::Point(27, 10);
            this->pictureBox10->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->pictureBox10->Name = L"pictureBox10";
            this->pictureBox10->Size = System::Drawing::Size(65, 48);
            this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox10->TabIndex = 0;
            this->pictureBox10->TabStop = false;
            this->pictureBox10->Click += gcnew System::EventHandler(this, &MyForm::pictureBox10_Click);
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->ForeColor = System::Drawing::Color::White;
            this->label6->Location = System::Drawing::Point(663, 11);
            this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(129, 42);
            this->label6->TabIndex = 11;
            this->label6->Text = L"Honda";
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label11->ForeColor = System::Drawing::Color::LemonChiffon;
            this->label11->Location = System::Drawing::Point(1187, 25);
            this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(23, 25);
            this->label11->TabIndex = 10;
            this->label11->Text = L"0";
            this->label11->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
            // 
            // pictureBox11
            // 
            this->pictureBox11->BackColor = System::Drawing::Color::DarkGreen;
            this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
            this->pictureBox11->Location = System::Drawing::Point(1336, -6);
            this->pictureBox11->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->pictureBox11->Name = L"pictureBox11";
            this->pictureBox11->Size = System::Drawing::Size(84, 64);
            this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox11->TabIndex = 9;
            this->pictureBox11->TabStop = false;
            // 
            // panel7
            // 
            this->panel7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel7.BackgroundImage")));
            this->panel7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->panel7->Controls->Add(this->keeperlabel352);
            this->panel7->Controls->Add(this->dlabel352three);
            this->panel7->Controls->Add(this->dlabel352two);
            this->panel7->Controls->Add(this->dlabel352one);
            this->panel7->Controls->Add(this->mlabel352five);
            this->panel7->Controls->Add(this->mlabel352four);
            this->panel7->Controls->Add(this->mlabel352three);
            this->panel7->Controls->Add(this->mlabel352two);
            this->panel7->Controls->Add(this->mlabel352one);
            this->panel7->Controls->Add(this->flabel352two);
            this->panel7->Controls->Add(this->flabel352one);
            this->panel7->Controls->Add(this->button37);
            this->panel7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->panel7->Location = System::Drawing::Point(0, 48);
            this->panel7->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->panel7->Name = L"panel7";
            this->panel7->Size = System::Drawing::Size(1443, 790);
            this->panel7->TabIndex = 0;
            // 
            // keeperlabel352
            // 
            this->keeperlabel352->AutoSize = true;
            this->keeperlabel352->Location = System::Drawing::Point(1257, 441);
            this->keeperlabel352->Name = L"keeperlabel352";
            this->keeperlabel352->Size = System::Drawing::Size(69, 20);
            this->keeperlabel352->TabIndex = 22;
            this->keeperlabel352->Text = L"label31";
            // 
            // dlabel352three
            // 
            this->dlabel352three->AutoSize = true;
            this->dlabel352three->Location = System::Drawing::Point(1053, 665);
            this->dlabel352three->Name = L"dlabel352three";
            this->dlabel352three->Size = System::Drawing::Size(69, 20);
            this->dlabel352three->TabIndex = 21;
            this->dlabel352three->Text = L"label30";
            // 
            // dlabel352two
            // 
            this->dlabel352two->AutoSize = true;
            this->dlabel352two->Location = System::Drawing::Point(1053, 455);
            this->dlabel352two->Name = L"dlabel352two";
            this->dlabel352two->Size = System::Drawing::Size(69, 20);
            this->dlabel352two->TabIndex = 20;
            this->dlabel352two->Text = L"label29";
            // 
            // dlabel352one
            // 
            this->dlabel352one->AutoSize = true;
            this->dlabel352one->Location = System::Drawing::Point(1053, 231);
            this->dlabel352one->Name = L"dlabel352one";
            this->dlabel352one->Size = System::Drawing::Size(69, 20);
            this->dlabel352one->TabIndex = 19;
            this->dlabel352one->Text = L"label28";
            // 
            // mlabel352five
            // 
            this->mlabel352five->AutoSize = true;
            this->mlabel352five->Location = System::Drawing::Point(691, 743);
            this->mlabel352five->Name = L"mlabel352five";
            this->mlabel352five->Size = System::Drawing::Size(69, 20);
            this->mlabel352five->TabIndex = 18;
            this->mlabel352five->Text = L"label27";
            // 
            // mlabel352four
            // 
            this->mlabel352four->AutoSize = true;
            this->mlabel352four->Location = System::Drawing::Point(691, 587);
            this->mlabel352four->Name = L"mlabel352four";
            this->mlabel352four->Size = System::Drawing::Size(69, 20);
            this->mlabel352four->TabIndex = 17;
            this->mlabel352four->Text = L"label26";
            // 
            // mlabel352three
            // 
            this->mlabel352three->AutoSize = true;
            this->mlabel352three->Location = System::Drawing::Point(691, 448);
            this->mlabel352three->Name = L"mlabel352three";
            this->mlabel352three->Size = System::Drawing::Size(69, 20);
            this->mlabel352three->TabIndex = 16;
            this->mlabel352three->Text = L"label25";
            // 
            // mlabel352two
            // 
            this->mlabel352two->AutoSize = true;
            this->mlabel352two->Location = System::Drawing::Point(691, 311);
            this->mlabel352two->Name = L"mlabel352two";
            this->mlabel352two->Size = System::Drawing::Size(69, 20);
            this->mlabel352two->TabIndex = 15;
            this->mlabel352two->Text = L"label21";
            // 
            // mlabel352one
            // 
            this->mlabel352one->AutoSize = true;
            this->mlabel352one->Location = System::Drawing::Point(691, 150);
            this->mlabel352one->Name = L"mlabel352one";
            this->mlabel352one->Size = System::Drawing::Size(69, 20);
            this->mlabel352one->TabIndex = 14;
            this->mlabel352one->Text = L"label18";
            // 
            // flabel352two
            // 
            this->flabel352two->AutoSize = true;
            this->flabel352two->Location = System::Drawing::Point(319, 567);
            this->flabel352two->Name = L"flabel352two";
            this->flabel352two->Size = System::Drawing::Size(69, 20);
            this->flabel352two->TabIndex = 13;
            this->flabel352two->Text = L"label15";
            // 
            // flabel352one
            // 
            this->flabel352one->AutoSize = true;
            this->flabel352one->Location = System::Drawing::Point(319, 332);
            this->flabel352one->Name = L"flabel352one";
            this->flabel352one->Size = System::Drawing::Size(69, 20);
            this->flabel352one->TabIndex = 12;
            this->flabel352one->Text = L"label12";
            // 
            // button37
            // 
            this->button37->Location = System::Drawing::Point(0, 1031);
            this->button37->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->button37->Name = L"button37";
            this->button37->Size = System::Drawing::Size(107, 98);
            this->button37->TabIndex = 7;
            this->button37->Text = L"button37";
            this->button37->UseVisualStyleBackColor = true;
            // 
            // transferbutton352
            // 
            this->transferbutton352->BackColor = System::Drawing::Color::White;
            this->transferbutton352->Controls->Add(this->panel8);
            this->transferbutton352->Controls->Add(this->panel9);
            this->transferbutton352->Dock = System::Windows::Forms::DockStyle::Fill;
            this->transferbutton352->Location = System::Drawing::Point(0, 0);
            this->transferbutton352->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->transferbutton352->Name = L"transferbutton352";
            this->transferbutton352->Size = System::Drawing::Size(1443, 838);
            this->transferbutton352->TabIndex = 7;
            // 
            // panel8
            // 
            this->panel8->BackColor = System::Drawing::Color::DarkGreen;
            this->panel8->Controls->Add(this->label14);
            this->panel8->Controls->Add(this->label12);
            this->panel8->Controls->Add(this->label10);
            this->panel8->Controls->Add(this->button21);
            this->panel8->Controls->Add(this->pictureBox12);
            this->panel8->Controls->Add(this->label13);
            this->panel8->Controls->Add(this->pictureBox13);
            this->panel8->Location = System::Drawing::Point(0, 0);
            this->panel8->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->panel8->Name = L"panel8";
            this->panel8->Size = System::Drawing::Size(1443, 62);
            this->panel8->TabIndex = 1;
            // 
            // label14
            // 
            this->label14->AutoSize = true;
            this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label14->ForeColor = System::Drawing::Color::Gold;
            this->label14->Location = System::Drawing::Point(1301, 20);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(26, 29);
            this->label14->TabIndex = 18;
            this->label14->Text = L"$";
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->BackColor = System::Drawing::Color::DarkGreen;
            this->label12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label12->ForeColor = System::Drawing::Color::Gold;
            this->label12->Location = System::Drawing::Point(853, 22);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(304, 25);
            this->label12->TabIndex = 17;
            this->label12->Text = L"YOUR REMAINING BUDGET :";
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label10->ForeColor = System::Drawing::Color::LemonChiffon;
            this->label10->Location = System::Drawing::Point(1203, 22);
            this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(84, 25);
            this->label10->TabIndex = 16;
            this->label10->Text = L"100000";
            // 
            // button21
            // 
            this->button21->BackColor = System::Drawing::Color::DarkGreen;
            this->button21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button21.BackgroundImage")));
            this->button21->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->button21->FlatAppearance->BorderSize = 0;
            this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button21->Location = System::Drawing::Point(124, 6);
            this->button21->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->button21->Name = L"button21";
            this->button21->Size = System::Drawing::Size(64, 52);
            this->button21->TabIndex = 15;
            this->button21->UseVisualStyleBackColor = false;
            this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click_1);
            // 
            // pictureBox12
            // 
            this->pictureBox12->BackColor = System::Drawing::Color::DarkGreen;
            this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
            this->pictureBox12->Location = System::Drawing::Point(27, 10);
            this->pictureBox12->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->pictureBox12->Name = L"pictureBox12";
            this->pictureBox12->Size = System::Drawing::Size(65, 48);
            this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox12->TabIndex = 0;
            this->pictureBox12->TabStop = false;
            this->pictureBox12->Click += gcnew System::EventHandler(this, &MyForm::pictureBox12_Click);
            // 
            // label13
            // 
            this->label13->AutoSize = true;
            this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label13->ForeColor = System::Drawing::Color::White;
            this->label13->Location = System::Drawing::Point(663, 11);
            this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(129, 42);
            this->label13->TabIndex = 11;
            this->label13->Text = L"Honda";
            // 
            // pictureBox13
            // 
            this->pictureBox13->BackColor = System::Drawing::Color::DarkGreen;
            this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
            this->pictureBox13->Location = System::Drawing::Point(1336, -6);
            this->pictureBox13->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->pictureBox13->Name = L"pictureBox13";
            this->pictureBox13->Size = System::Drawing::Size(84, 64);
            this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox13->TabIndex = 9;
            this->pictureBox13->TabStop = false;
            // 
            // panel9
            // 
            this->panel9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel9.BackgroundImage")));
            this->panel9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->panel9->Controls->Add(this->pictureBox19);
            this->panel9->Controls->Add(this->dcombo352three);
            this->panel9->Controls->Add(this->dcombo352two);
            this->panel9->Controls->Add(this->dcombo352one);
            this->panel9->Controls->Add(this->mcombo352five);
            this->panel9->Controls->Add(this->mcombo352four);
            this->panel9->Controls->Add(this->mcombo352three);
            this->panel9->Controls->Add(this->mcombo352two);
            this->panel9->Controls->Add(this->mcombo352one);
            this->panel9->Controls->Add(this->fcombo352two);
            this->panel9->Controls->Add(this->keepercombo352);
            this->panel9->Controls->Add(this->fcombo352one);
            this->panel9->Controls->Add(this->button45);
            this->panel9->Controls->Add(this->button46);
            this->panel9->Controls->Add(this->button47);
            this->panel9->Controls->Add(this->button48);
            this->panel9->Controls->Add(this->button49);
            this->panel9->Controls->Add(this->button50);
            this->panel9->Controls->Add(this->button51);
            this->panel9->Controls->Add(this->button52);
            this->panel9->Controls->Add(this->button53);
            this->panel9->Controls->Add(this->button54);
            this->panel9->Controls->Add(this->button55);
            this->panel9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->panel9->Location = System::Drawing::Point(0, 48);
            this->panel9->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->panel9->Name = L"panel9";
            this->panel9->Size = System::Drawing::Size(1443, 790);
            this->panel9->TabIndex = 0;
            // 
            // pictureBox19
            // 
            this->pictureBox19->BackColor = System::Drawing::Color::LightGray;
            this->pictureBox19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox19.Image")));
            this->pictureBox19->Location = System::Drawing::Point(308, 231);
            this->pictureBox19->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->pictureBox19->Name = L"pictureBox19";
            this->pictureBox19->Size = System::Drawing::Size(105, 110);
            this->pictureBox19->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
            this->pictureBox19->TabIndex = 23;
            this->pictureBox19->TabStop = false;
            // 
            // dcombo352three
            // 
            this->dcombo352three->FormattingEnabled = true;
            this->dcombo352three->Location = System::Drawing::Point(913, 662);
            this->dcombo352three->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->dcombo352three->Name = L"dcombo352three";
            this->dcombo352three->Size = System::Drawing::Size(209, 28);
            this->dcombo352three->TabIndex = 22;
            // 
            // dcombo352two
            // 
            this->dcombo352two->FormattingEnabled = true;
            this->dcombo352two->Location = System::Drawing::Point(913, 448);
            this->dcombo352two->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->dcombo352two->Name = L"dcombo352two";
            this->dcombo352two->Size = System::Drawing::Size(191, 28);
            this->dcombo352two->TabIndex = 21;
            // 
            // dcombo352one
            // 
            this->dcombo352one->FormattingEnabled = true;
            this->dcombo352one->Location = System::Drawing::Point(913, 231);
            this->dcombo352one->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->dcombo352one->Name = L"dcombo352one";
            this->dcombo352one->Size = System::Drawing::Size(209, 28);
            this->dcombo352one->TabIndex = 20;
            // 
            // mcombo352five
            // 
            this->mcombo352five->FormattingEnabled = true;
            this->mcombo352five->Location = System::Drawing::Point(600, 734);
            this->mcombo352five->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->mcombo352five->Name = L"mcombo352five";
            this->mcombo352five->Size = System::Drawing::Size(239, 28);
            this->mcombo352five->TabIndex = 19;
            // 
            // mcombo352four
            // 
            this->mcombo352four->FormattingEnabled = true;
            this->mcombo352four->Location = System::Drawing::Point(600, 587);
            this->mcombo352four->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->mcombo352four->Name = L"mcombo352four";
            this->mcombo352four->Size = System::Drawing::Size(239, 28);
            this->mcombo352four->TabIndex = 18;
            // 
            // mcombo352three
            // 
            this->mcombo352three->FormattingEnabled = true;
            this->mcombo352three->Location = System::Drawing::Point(600, 441);
            this->mcombo352three->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->mcombo352three->Name = L"mcombo352three";
            this->mcombo352three->Size = System::Drawing::Size(239, 28);
            this->mcombo352three->TabIndex = 17;
            // 
            // mcombo352two
            // 
            this->mcombo352two->FormattingEnabled = true;
            this->mcombo352two->Location = System::Drawing::Point(600, 308);
            this->mcombo352two->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->mcombo352two->Name = L"mcombo352two";
            this->mcombo352two->Size = System::Drawing::Size(239, 28);
            this->mcombo352two->TabIndex = 16;
            // 
            // mcombo352one
            // 
            this->mcombo352one->FormattingEnabled = true;
            this->mcombo352one->Location = System::Drawing::Point(600, 174);
            this->mcombo352one->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->mcombo352one->Name = L"mcombo352one";
            this->mcombo352one->Size = System::Drawing::Size(239, 28);
            this->mcombo352one->TabIndex = 15;
            // 
            // fcombo352two
            // 
            this->fcombo352two->FormattingEnabled = true;
            this->fcombo352two->Location = System::Drawing::Point(253, 558);
            this->fcombo352two->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->fcombo352two->Name = L"fcombo352two";
            this->fcombo352two->Size = System::Drawing::Size(207, 28);
            this->fcombo352two->TabIndex = 14;
            // 
            // keepercombo352
            // 
            this->keepercombo352->FormattingEnabled = true;
            this->keepercombo352->Location = System::Drawing::Point(1149, 446);
            this->keepercombo352->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->keepercombo352->Name = L"keepercombo352";
            this->keepercombo352->Size = System::Drawing::Size(184, 28);
            this->keepercombo352->TabIndex = 13;
            // 
            // fcombo352one
            // 
            this->fcombo352one->FormattingEnabled = true;
            this->fcombo352one->Location = System::Drawing::Point(253, 347);
            this->fcombo352one->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->fcombo352one->Name = L"fcombo352one";
            this->fcombo352one->Size = System::Drawing::Size(207, 28);
            this->fcombo352one->TabIndex = 12;
            this->fcombo352one->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::fcombo352one_SelectedIndexChanged);
            // 
            // button45
            // 
            this->button45->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button45.BackgroundImage")));
            this->button45->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
            this->button45->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button45->Location = System::Drawing::Point(1209, 341);
            this->button45->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->button45->Name = L"button45";
            this->button45->Size = System::Drawing::Size(107, 98);
            this->button45->TabIndex = 11;
            this->button45->UseVisualStyleBackColor = true;
            // 
            // button46
            // 
            this->button46->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button46.BackgroundImage")));
            this->button46->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
            this->button46->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button46->Location = System::Drawing::Point(671, 71);
            this->button46->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->button46->Name = L"button46";
            this->button46->Size = System::Drawing::Size(107, 98);
            this->button46->TabIndex = 10;
            this->button46->UseVisualStyleBackColor = true;
            // 
            // button47
            // 
            this->button47->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button47.BackgroundImage")));
            this->button47->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
            this->button47->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button47->Location = System::Drawing::Point(671, 486);
            this->button47->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->button47->Name = L"button47";
            this->button47->Size = System::Drawing::Size(107, 98);
            this->button47->TabIndex = 9;
            this->button47->UseVisualStyleBackColor = true;
            // 
            // button48
            // 
            this->button48->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button48.BackgroundImage")));
            this->button48->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
            this->button48->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button48->Location = System::Drawing::Point(308, 452);
            this->button48->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->button48->Name = L"button48";
            this->button48->Size = System::Drawing::Size(107, 98);
            this->button48->TabIndex = 8;
            this->button48->UseVisualStyleBackColor = true;
            // 
            // button49
            // 
            this->button49->Location = System::Drawing::Point(0, 1031);
            this->button49->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->button49->Name = L"button49";
            this->button49->Size = System::Drawing::Size(107, 98);
            this->button49->TabIndex = 7;
            this->button49->Text = L"button49";
            this->button49->UseVisualStyleBackColor = true;
            // 
            // button50
            // 
            this->button50->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button50.BackgroundImage")));
            this->button50->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
            this->button50->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button50->Location = System::Drawing::Point(953, 126);
            this->button50->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->button50->Name = L"button50";
            this->button50->Size = System::Drawing::Size(107, 98);
            this->button50->TabIndex = 6;
            this->button50->UseVisualStyleBackColor = true;
            // 
            // button51
            // 
            this->button51->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button51.BackgroundImage")));
            this->button51->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
            this->button51->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button51->Location = System::Drawing::Point(953, 340);
            this->button51->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->button51->Name = L"button51";
            this->button51->Size = System::Drawing::Size(107, 98);
            this->button51->TabIndex = 5;
            this->button51->UseVisualStyleBackColor = true;
            // 
            // button52
            // 
            this->button52->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button52.BackgroundImage")));
            this->button52->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
            this->button52->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button52->Location = System::Drawing::Point(953, 550);
            this->button52->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->button52->Name = L"button52";
            this->button52->Size = System::Drawing::Size(107, 98);
            this->button52->TabIndex = 4;
            this->button52->UseVisualStyleBackColor = true;
            // 
            // button53
            // 
            this->button53->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button53.BackgroundImage")));
            this->button53->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
            this->button53->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button53->Location = System::Drawing::Point(671, 209);
            this->button53->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->button53->Name = L"button53";
            this->button53->Size = System::Drawing::Size(107, 98);
            this->button53->TabIndex = 3;
            this->button53->UseVisualStyleBackColor = true;
            // 
            // button54
            // 
            this->button54->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button54.BackgroundImage")));
            this->button54->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
            this->button54->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button54->Location = System::Drawing::Point(671, 628);
            this->button54->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->button54->Name = L"button54";
            this->button54->Size = System::Drawing::Size(107, 98);
            this->button54->TabIndex = 2;
            this->button54->UseVisualStyleBackColor = true;
            // 
            // button55
            // 
            this->button55->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button55.BackgroundImage")));
            this->button55->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
            this->button55->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button55->Location = System::Drawing::Point(671, 340);
            this->button55->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->button55->Name = L"button55";
            this->button55->Size = System::Drawing::Size(107, 98);
            this->button55->TabIndex = 1;
            this->button55->UseVisualStyleBackColor = true;
            // 
            // Account
            // 
            this->Account->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Account.BackgroundImage")));
            this->Account->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->Account->Controls->Add(this->pictureBox18);
            this->Account->Controls->Add(this->label24);
            this->Account->Controls->Add(this->textBox8);
            this->Account->Controls->Add(this->textBox7);
            this->Account->Dock = System::Windows::Forms::DockStyle::Fill;
            this->Account->Location = System::Drawing::Point(0, 0);
            this->Account->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->Account->Name = L"Account";
            this->Account->Size = System::Drawing::Size(1443, 838);
            this->Account->TabIndex = 12;
            // 
            // pictureBox18
            // 
            this->pictureBox18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
                static_cast<System::Int32>(static_cast<System::Byte>(48)));
            this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.Image")));
            this->pictureBox18->Location = System::Drawing::Point(27, 20);
            this->pictureBox18->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->pictureBox18->Name = L"pictureBox18";
            this->pictureBox18->Size = System::Drawing::Size(112, 78);
            this->pictureBox18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
            this->pictureBox18->TabIndex = 7;
            this->pictureBox18->TabStop = false;
            this->pictureBox18->Click += gcnew System::EventHandler(this, &MyForm::pictureBox18_Click);
            // 
            // label24
            // 
            this->label24->AutoSize = true;
            this->label24->BackColor = System::Drawing::Color::White;
            this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label24->Location = System::Drawing::Point(944, 325);
            this->label24->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label24->Name = L"label24";
            this->label24->Size = System::Drawing::Size(0, 31);
            this->label24->TabIndex = 6;
            // 
            // textBox8
            // 
            this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox8->Location = System::Drawing::Point(937, 544);
            this->textBox8->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->textBox8->Name = L"textBox8";
            this->textBox8->Size = System::Drawing::Size(212, 19);
            this->textBox8->TabIndex = 5;
            this->textBox8->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox8_TextChanged);
            // 
            // textBox7
            // 
            this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox7->Location = System::Drawing::Point(937, 442);
            this->textBox7->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->textBox7->Name = L"textBox7";
            this->textBox7->Size = System::Drawing::Size(212, 19);
            this->textBox7->TabIndex = 4;
            // 
            // Admin
            // 
            this->Admin->BackColor = System::Drawing::Color::White;
            this->Admin->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Admin.BackgroundImage")));
            this->Admin->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->Admin->Controls->Add(this->comboBox1);
            this->Admin->Controls->Add(this->groupBox1);
            this->Admin->Controls->Add(this->pictureBox6);
            this->Admin->Controls->Add(this->pictureBox4);
            this->Admin->Controls->Add(this->label9);
            this->Admin->Controls->Add(this->label8);
            this->Admin->Controls->Add(this->label7);
            this->Admin->Controls->Add(this->button13);
            this->Admin->Controls->Add(this->button12);
            this->Admin->Controls->Add(this->button11);
            this->Admin->Controls->Add(this->button10);
            this->Admin->Controls->Add(this->textBox10);
            this->Admin->Controls->Add(this->textBox9);
            this->Admin->Dock = System::Windows::Forms::DockStyle::Fill;
            this->Admin->Location = System::Drawing::Point(0, 0);
            this->Admin->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->Admin->Name = L"Admin";
            this->Admin->Size = System::Drawing::Size(1443, 838);
            this->Admin->TabIndex = 13;
            // 
            // comboBox1
            // 
            this->comboBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(184)), static_cast<System::Int32>(static_cast<System::Byte>(185)),
                static_cast<System::Int32>(static_cast<System::Byte>(189)));
            this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->comboBox1->FormattingEnabled = true;
            this->comboBox1->Location = System::Drawing::Point(148, 315);
            this->comboBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->comboBox1->Name = L"comboBox1";
            this->comboBox1->Size = System::Drawing::Size(264, 33);
            this->comboBox1->TabIndex = 21;
            this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
            // 
            // groupBox1
            // 
            this->groupBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(184)), static_cast<System::Int32>(static_cast<System::Byte>(185)),
                static_cast<System::Int32>(static_cast<System::Byte>(189)));
            this->groupBox1->Controls->Add(this->radioButton4);
            this->groupBox1->Controls->Add(this->radioButton1);
            this->groupBox1->Controls->Add(this->radioButton2);
            this->groupBox1->Controls->Add(this->radioButton3);
            this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->groupBox1->ForeColor = System::Drawing::Color::Black;
            this->groupBox1->Location = System::Drawing::Point(60, 266);
            this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->groupBox1->Name = L"groupBox1";
            this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->groupBox1->Size = System::Drawing::Size(448, 33);
            this->groupBox1->TabIndex = 20;
            this->groupBox1->TabStop = false;
            this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
            // 
            // radioButton4
            // 
            this->radioButton4->AutoSize = true;
            this->radioButton4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton4->Location = System::Drawing::Point(352, 7);
            this->radioButton4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->radioButton4->Name = L"radioButton4";
            this->radioButton4->Size = System::Drawing::Size(87, 21);
            this->radioButton4->TabIndex = 3;
            this->radioButton4->Text = L"Forward";
            this->radioButton4->UseVisualStyleBackColor = true;
            this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton4_CheckedChanged);
            // 
            // radioButton1
            // 
            this->radioButton1->AutoSize = true;
            this->radioButton1->Checked = true;
            this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton1->Location = System::Drawing::Point(11, 7);
            this->radioButton1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->radioButton1->Name = L"radioButton1";
            this->radioButton1->Size = System::Drawing::Size(113, 21);
            this->radioButton1->TabIndex = 0;
            this->radioButton1->TabStop = true;
            this->radioButton1->Text = L"Goalkeeper";
            this->radioButton1->UseVisualStyleBackColor = true;
            this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
            // 
            // radioButton2
            // 
            this->radioButton2->AutoSize = true;
            this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton2->Location = System::Drawing::Point(132, 7);
            this->radioButton2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->radioButton2->Name = L"radioButton2";
            this->radioButton2->Size = System::Drawing::Size(96, 21);
            this->radioButton2->TabIndex = 1;
            this->radioButton2->Text = L"Defender";
            this->radioButton2->UseVisualStyleBackColor = true;
            this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
            // 
            // radioButton3
            // 
            this->radioButton3->AutoSize = true;
            this->radioButton3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton3->Location = System::Drawing::Point(240, 7);
            this->radioButton3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->radioButton3->Name = L"radioButton3";
            this->radioButton3->Size = System::Drawing::Size(100, 21);
            this->radioButton3->TabIndex = 2;
            this->radioButton3->Text = L"Midfielder";
            this->radioButton3->UseVisualStyleBackColor = true;
            this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_CheckedChanged);
            // 
            // pictureBox6
            // 
            this->pictureBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(19)),
                static_cast<System::Int32>(static_cast<System::Byte>(61)));
            this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
            this->pictureBox6->Location = System::Drawing::Point(1333, 20);
            this->pictureBox6->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->pictureBox6->Name = L"pictureBox6";
            this->pictureBox6->Size = System::Drawing::Size(73, 63);
            this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox6->TabIndex = 18;
            this->pictureBox6->TabStop = false;
            this->pictureBox6->Click += gcnew System::EventHandler(this, &MyForm::pictureBox6_Click_1);
            // 
            // pictureBox4
            // 
            this->pictureBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(19)),
                static_cast<System::Int32>(static_cast<System::Byte>(61)));
            this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
            this->pictureBox4->Location = System::Drawing::Point(27, 23);
            this->pictureBox4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->pictureBox4->Name = L"pictureBox4";
            this->pictureBox4->Size = System::Drawing::Size(45, 50);
            this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox4->TabIndex = 11;
            this->pictureBox4->TabStop = false;
            this->pictureBox4->Click += gcnew System::EventHandler(this, &MyForm::pictureBox4_Click_2);
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(55)));
            this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label9->ForeColor = System::Drawing::Color::White;
            this->label9->Location = System::Drawing::Point(972, 459);
            this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(0, 36);
            this->label9->TabIndex = 10;
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(55)));
            this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label8->ForeColor = System::Drawing::Color::White;
            this->label8->Location = System::Drawing::Point(972, 598);
            this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(0, 36);
            this->label8->TabIndex = 9;
            this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(55)));
            this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label7->ForeColor = System::Drawing::Color::White;
            this->label7->Location = System::Drawing::Point(972, 315);
            this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(0, 36);
            this->label7->TabIndex = 8;
            this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click_1);
            // 
            // button13
            // 
            this->button13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(87)),
                static_cast<System::Int32>(static_cast<System::Byte>(87)));
            this->button13->FlatAppearance->BorderSize = 0;
            this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button13->ForeColor = System::Drawing::Color::White;
            this->button13->Location = System::Drawing::Point(311, 683);
            this->button13->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->button13->Name = L"button13";
            this->button13->Size = System::Drawing::Size(133, 43);
            this->button13->TabIndex = 6;
            this->button13->Text = L"Violation";
            this->button13->UseVisualStyleBackColor = false;
            this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click_1);
            // 
            // button12
            // 
            this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
                static_cast<System::Int32>(static_cast<System::Byte>(89)));
            this->button12->FlatAppearance->BorderSize = 0;
            this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button12->ForeColor = System::Drawing::Color::White;
            this->button12->Location = System::Drawing::Point(111, 683);
            this->button12->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->button12->Name = L"button12";
            this->button12->Size = System::Drawing::Size(133, 43);
            this->button12->TabIndex = 5;
            this->button12->Text = L"Violation";
            this->button12->UseVisualStyleBackColor = false;
            this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click_1);
            // 
            // button11
            // 
            this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(184)), static_cast<System::Int32>(static_cast<System::Byte>(185)),
                static_cast<System::Int32>(static_cast<System::Byte>(189)));
            this->button11->FlatAppearance->BorderSize = 0;
            this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button11->Location = System::Drawing::Point(232, 519);
            this->button11->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->button11->Name = L"button11";
            this->button11->Size = System::Drawing::Size(183, 38);
            this->button11->TabIndex = 4;
            this->button11->Text = L"Add Assist";
            this->button11->UseVisualStyleBackColor = false;
            this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click_1);
            // 
            // button10
            // 
            this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(184)), static_cast<System::Int32>(static_cast<System::Byte>(185)),
                static_cast<System::Int32>(static_cast<System::Byte>(189)));
            this->button10->FlatAppearance->BorderSize = 0;
            this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button10->Location = System::Drawing::Point(231, 442);
            this->button10->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->button10->Name = L"button10";
            this->button10->Size = System::Drawing::Size(183, 38);
            this->button10->TabIndex = 3;
            this->button10->Text = L"Add Goal";
            this->button10->UseVisualStyleBackColor = false;
            this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click_1);
            // 
            // textBox10
            // 
            this->textBox10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(184)), static_cast<System::Int32>(static_cast<System::Byte>(185)),
                static_cast<System::Int32>(static_cast<System::Byte>(189)));
            this->textBox10->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox10->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox10->Location = System::Drawing::Point(140, 523);
            this->textBox10->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->textBox10->Multiline = true;
            this->textBox10->Name = L"textBox10";
            this->textBox10->Size = System::Drawing::Size(44, 28);
            this->textBox10->TabIndex = 2;
            this->textBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox9
            // 
            this->textBox9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(184)), static_cast<System::Int32>(static_cast<System::Byte>(185)),
                static_cast<System::Int32>(static_cast<System::Byte>(189)));
            this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox9->Location = System::Drawing::Point(140, 442);
            this->textBox9->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->textBox9->Multiline = true;
            this->textBox9->Name = L"textBox9";
            this->textBox9->Size = System::Drawing::Size(44, 36);
            this->textBox9->TabIndex = 1;
            this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // backgroundWorker1
            // 
            this->backgroundWorker1->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &MyForm::backgroundWorker1_DoWork);
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::MidnightBlue;
            this->ClientSize = System::Drawing::Size(1443, 838);
            this->Controls->Add(this->Start);
            this->Controls->Add(this->Admin);
            this->Controls->Add(this->signin);
            this->Controls->Add(this->transferbutton352);
            this->Controls->Add(this->home);
            this->Controls->Add(this->MyTeam352);
            this->Controls->Add(this->Account);
            this->Controls->Add(this->reg);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
            this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->Name = L"MyForm";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"Fantasy";
            this->Start->ResumeLayout(false);
            this->signin->ResumeLayout(false);
            this->signin->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->reg->ResumeLayout(false);
            this->reg->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            this->home->ResumeLayout(false);
            this->home->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
            this->MyTeam352->ResumeLayout(false);
            this->panel6->ResumeLayout(false);
            this->panel6->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
            this->panel7->ResumeLayout(false);
            this->panel7->PerformLayout();
            this->transferbutton352->ResumeLayout(false);
            this->panel8->ResumeLayout(false);
            this->panel8->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
            this->panel9->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
            this->Account->ResumeLayout(false);
            this->Account->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
            this->Admin->ResumeLayout(false);
            this->Admin->PerformLayout();
            this->groupBox1->ResumeLayout(false);
            this->groupBox1->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
            this->ResumeLayout(false);

        }
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		signin->BringToFront();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		reg->BringToFront();
	}
	private: System::Void Start_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
           /////// REGISTERRRR ///////////////
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
        

        Player^ user100 = gcnew Player();
        user100->player_id = rand() % 100000;
        user100->budget = 100000;
        user100->player_total_points = 0;
        user100->player_name = textBox5->Text;
        user100->password = textBox6->Text;

        if (textBox6->Text == textBox4->Text) {
            myList->Add(user100);
            signin->BringToFront();
            textBox4->Text = "";
            textBox5->Text = "";
            textBox6->Text = "";
        }
        else {
            MessageBox::Show("Please Try again", "Wrong confirmation password");
        }
	}

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		Start->BringToFront();
	}
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
		Start->BringToFront();
	}

           ///////// SIGN INN ///////////////
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

        bool found = false;

        for each (Player ^ obj in myList)
        {
            if (richTextBox1->Text == "Admin" && textBox1->Text == "Admin") {
                Admin->BringToFront();
                found = true;
                break;
            }

            if (richTextBox1->Text == obj->player_name && textBox1->Text == obj->password) {
                home->BringToFront();
                richTextBox1->Text = "";
                textBox1->Text = "";
                
                std::ostringstream total_budget;
                total_budget <<obj->budget;
                std::string budgett = total_budget.str();
                label10->Text = gcnew System::String(budgett.c_str());


                std::ostringstream total_points;
                total_points << obj->player_total_points;
                std::string points = total_points.str();
                label11->Text = gcnew System::String(points.c_str());


                found = true;
                obj->signedin = true;
                label6->Text = obj->player_name;
                label13->Text = obj->player_name;


                if (obj->mykeeper->name != "" && obj->mydef1->name != "" && obj->mydef2->name != "" && obj->mydef3->name != "")
                {
                    if (obj->mymid1->name != "" && obj->mymid2->name != "" && obj->mymid3->name != "" && obj->mymid4->name != "") {

                        if (obj->mymid5->name != "" && obj->myfor1->name != "" && obj->myfor2->name != "") {
                            
                            keepercombo352->SelectedItem = obj->mykeeper->name;
                            dcombo352one->SelectedItem = obj->mydef1->name;
                            dcombo352two->SelectedItem = obj->mydef2->name;
                            dcombo352three->SelectedItem = obj->mydef3->name;
                            mcombo352one->SelectedItem = obj->mymid1->name;
                            mcombo352two->SelectedItem = obj->mymid2->name;
                            mcombo352three->SelectedItem = obj->mymid3->name;
                            mcombo352four->SelectedItem = obj->mymid4->name;
                            mcombo352five->SelectedItem = obj->mymid5->name;
                            fcombo352one->SelectedItem = obj->myfor1->name;
                            fcombo352two->SelectedItem = obj->myfor2->name;

                            keeperlabel352->Text = obj->mykeeper->name;
                            dlabel352one->Text = obj->mydef1->name;
                            dlabel352two->Text = obj->mydef2->name;
                            dlabel352three->Text = obj->mydef3->name;
                            mlabel352one->Text = obj->mymid1->name;
                            mlabel352two->Text = obj->mymid2->name;
                            mlabel352three->Text = obj->mymid3->name;
                            mlabel352four->Text = obj->mymid4->name;
                            mlabel352five->Text = obj->mymid5->name;
                            flabel352one->Text = obj->myfor1->name;
                            flabel352two->Text = obj->myfor2->name;

                            obj->myteampanel = true;

                        }
                    }
                }
                else {
                    MessageBox::Show("Welcome to Fantasy", "Hello");
                }
               
            }
        }


        if (!found) {
            MessageBox::Show("Please Try again","Wrong username or password");
        }
      
	}
	private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void label6_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label6_Click_2(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void pictureBox6_Click(System::Object^ sender, System::EventArgs^ e) {
	home->BringToFront();
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox7_Click_1(System::Object^ sender, System::EventArgs^ e) {
	home->BringToFront();
}

private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button32_Click(System::Object^ sender, System::EventArgs^ e) {

	transferbutton352->BringToFront();

    if (x == 0) {
        for each (footballer ^ obj in forward) {
            fcombo352one->Items->Add(obj->name);
            fcombo352two->Items->Add(obj->name);
        }
        for each (footballer ^ obj in midfielder) {
            mcombo352one->Items->Add(obj->name);
            mcombo352two->Items->Add(obj->name);
            mcombo352three->Items->Add(obj->name);
            mcombo352four->Items->Add(obj->name);
            mcombo352five->Items->Add(obj->name);
        }
        for each (footballer ^ obj in goalkeeper) {
            keepercombo352->Items->Add(obj->name);
        }
        for each (footballer ^ obj in defender) {
            dcombo352one->Items->Add(obj->name);
            dcombo352two->Items->Add(obj->name);
            dcombo352three->Items->Add(obj->name);
        }
        x++;
    }

    

}



private: System::Void button9_Click_1(System::Object^ sender, System::EventArgs^ e) {

    textBox7->Text = "";
    textBox8->Text = "";
    label24->Text = "";
    label11->Text = "0";
    
    for (int i = 0; i < myList->Count; i++) {
        if (myList[i]->signedin = true) {
            myList[i]->budget = myList[i]->budget_before_replace;
        } 
    }

    for (int i = 0; i < myList->Count; i++) {
        myList[i]->signedin = false;
        myList[i]->myteampanel = false;
    }
    keepercombo352->SelectedIndex = -1;
    dcombo352one->SelectedIndex = -1;
    dcombo352two->SelectedIndex = -1;
    dcombo352three->SelectedIndex = -1;
    mcombo352one->SelectedIndex = -1;
    mcombo352two->SelectedIndex = -1;
    mcombo352three->SelectedIndex = -1;
    mcombo352four->SelectedIndex = -1;
    mcombo352five->SelectedIndex = -1;
    fcombo352one->SelectedIndex = -1;
    fcombo352two->SelectedIndex = -1;

    flabel352one->Text = "";
    flabel352two->Text = "";
    keeperlabel352->Text = "";
    dlabel352one->Text = "";
    dlabel352two->Text = "";
    dlabel352three->Text = "";
    mlabel352one->Text = "";
    mlabel352two->Text = "";
    mlabel352three->Text = "";
    mlabel352four->Text = "";
    mlabel352five->Text = "";


    Start->BringToFront();
}
private: System::Void button6_Click_1(System::Object^ sender, System::EventArgs^ e) {

    //Myteam


    for (int i = 0; i < myList->Count; i++)
    {
        if (myList[i]->myteampanel) {
            MyTeam352->BringToFront();
        }
    }



    for (int i = 0; i < myList->Count; i++)
    {
        if (myList[i]->signedin){

            std::ostringstream total_points;
            total_points << myList[i]->player_total_points;
            std::string points = total_points.str();
            label11->Text = gcnew System::String(points.c_str());
        }
    }

}
private: System::Void button33_Click(System::Object^ sender, System::EventArgs^ e) {
    //Account

    Account->BringToFront();
    String^ pts = "Points";
    String^ bdg = "budget";

    for (int i = 0; i < myList->Count; i++)
    {
        if (myList[i]->signedin) {
            label24->Text = myList[i]->player_name;
            textBox7->Text = myList[i]->password;
            std::ostringstream oss;
            oss << myList[i]->player_id;
            std::string str = oss.str();
            textBox8->Text = gcnew System::String(str.c_str());
        }
    }

}
private: System::Void pictureBox12_Click(System::Object^ sender, System::EventArgs^ e) {
	home->BringToFront();
}
private: System::Void button59_Click(System::Object^ sender, System::EventArgs^ e) {
    transferbutton352->BringToFront();



}
private: System::Void pictureBox14_Click(System::Object^ sender, System::EventArgs^ e) {
	home->BringToFront();
}
private: System::Void pictureBox16_Click(System::Object^ sender, System::EventArgs^ e) {
	home->BringToFront();
}
private: System::Void button21_Click_1(System::Object^ sender, System::EventArgs^ e) {


    if (fcombo352two->SelectedIndex > -1 &&
        keepercombo352->SelectedIndex > -1 &&
        dcombo352one->SelectedIndex > -1 &&
        dcombo352two->SelectedIndex > -1 &&
        dcombo352three->SelectedIndex > -1 &&
        mcombo352one->SelectedIndex > -1 &&
        mcombo352two->SelectedIndex > -1 &&
        mcombo352three->SelectedIndex > -1 &&
        mcombo352four->SelectedIndex > -1 &&
        mcombo352five->SelectedIndex > -1 &&
        fcombo352one->SelectedIndex > -1)
    {
        if (fcombo352two->SelectedIndex != fcombo352one->SelectedIndex &&


            (mcombo352one->SelectedIndex != mcombo352two->SelectedIndex &&
                mcombo352one->SelectedIndex != mcombo352three->SelectedIndex &&
                mcombo352one->SelectedIndex != mcombo352four->SelectedIndex &&
                mcombo352one->SelectedIndex != mcombo352five->SelectedIndex &&
                mcombo352two->SelectedIndex != mcombo352three->SelectedIndex &&
                mcombo352two->SelectedIndex != mcombo352four->SelectedIndex &&
                mcombo352two->SelectedIndex != mcombo352five->SelectedIndex &&
                mcombo352three->SelectedIndex != mcombo352four->SelectedIndex &&
                mcombo352three->SelectedIndex != mcombo352five->SelectedIndex &&
                mcombo352four->SelectedIndex != mcombo352five->SelectedIndex) &&


            (dcombo352one->SelectedIndex != dcombo352two->SelectedIndex &&
                dcombo352one->SelectedIndex != dcombo352three->SelectedIndex &&
                dcombo352two->SelectedIndex != dcombo352three->SelectedIndex)
            ) {





            for (int i = 0; i < myList->Count; i++)
            {
                if (myList[i]->signedin) {
                    
                    if (fcombo352one->SelectedIndex > -1 && fcombo352two->SelectedIndex > -1 && mcombo352one->SelectedIndex > -1 && mcombo352two->SelectedIndex > -1 && mcombo352three->SelectedIndex > -1 && mcombo352four->SelectedIndex > -1 && mcombo352five->SelectedIndex > -1 && dcombo352one->SelectedIndex > -1 && dcombo352two->SelectedIndex > -1 && dcombo352three->SelectedIndex > -1 && keepercombo352->SelectedIndex > -1) {


                        for each (footballer ^ obj in goalkeeper) {
                            if (keepercombo352->SelectedItem->ToString() == obj->name) {
                                myList[i]->total_price(obj->price);
                            }
                        }

                        for each (footballer ^ obj in defender) {
                            if (dcombo352one->SelectedItem->ToString() == obj->name) {
                                myList[i]->total_price(obj->price);
                            }
                            if (dcombo352two->SelectedItem->ToString() == obj->name) {
                                myList[i]->total_price(obj->price);
                            }
                            if (dcombo352three->SelectedItem->ToString() == obj->name) {
                                myList[i]->total_price(obj->price);
                            }
                        }

                        for each (footballer ^ obj in midfielder) {
                            if (mcombo352one->SelectedItem->ToString() == obj->name) {
                                myList[i]->total_price(obj->price);
                            }
                            if (mcombo352two->SelectedItem->ToString() == obj->name) {
                                myList[i]->total_price(obj->price);
                            }
                            if (mcombo352three->SelectedItem->ToString() == obj->name) {
                                myList[i]->total_price(obj->price);
                            }
                            if (mcombo352four->SelectedItem->ToString() == obj->name) {
                                myList[i]->total_price(obj->price);
                            }
                            if (mcombo352five->SelectedItem->ToString() == obj->name) {
                                myList[i]->total_price(obj->price);
                            }
                        }


                        for each (footballer ^ obj in forward) {
                            if (fcombo352one->SelectedItem->ToString() == obj->name) {
                                myList[i]->total_price(obj->price);
                            }
                            if (fcombo352two->SelectedItem->ToString() == obj->name) {
                                myList[i]->total_price(obj->price);
                            }
                        }




                        if (myList[i]->checkBudget(myList[i]->budget)) {


                            myList[i]->mykeeper->name = keepercombo352->SelectedItem->ToString();
                            myList[i]->mydef1->name = dcombo352one->SelectedItem->ToString();
                            myList[i]->mydef2->name = dcombo352two->SelectedItem->ToString();
                            myList[i]->mydef3->name = dcombo352three->SelectedItem->ToString();
                            myList[i]->mymid1->name = mcombo352one->SelectedItem->ToString();
                            myList[i]->mymid2->name = mcombo352two->SelectedItem->ToString();
                            myList[i]->mymid3->name = mcombo352three->SelectedItem->ToString();
                            myList[i]->mymid4->name = mcombo352four->SelectedItem->ToString();
                            myList[i]->mymid5->name = mcombo352five->SelectedItem->ToString();
                            myList[i]->myfor1->name = fcombo352one->SelectedItem->ToString();
                            myList[i]->myfor2->name = fcombo352two->SelectedItem->ToString();







                            System::String^ selectedText = fcombo352one->SelectedItem->ToString();
                            flabel352one->Text = selectedText;

                            System::String^ selectedText2 = fcombo352two->SelectedItem->ToString();
                            flabel352two->Text = selectedText2;

                            System::String^ selectedText3 = mcombo352one->SelectedItem->ToString();
                            mlabel352one->Text = selectedText3;

                            System::String^ selectedText4 = mcombo352two->SelectedItem->ToString();
                            mlabel352two->Text = selectedText4;

                            System::String^ selectedText5 = mcombo352three->SelectedItem->ToString();
                            mlabel352three->Text = selectedText5;

                            System::String^ selectedText6 = mcombo352four->SelectedItem->ToString();
                            mlabel352four->Text = selectedText6;

                            System::String^ selectedText7 = mcombo352five->SelectedItem->ToString();
                            mlabel352five->Text = selectedText7;

                            System::String^ selectedText8 = dcombo352one->SelectedItem->ToString();
                            dlabel352one->Text = selectedText8;

                            System::String^ selectedText9 = dcombo352two->SelectedItem->ToString();
                            dlabel352two->Text = selectedText9;

                            System::String^ selectedText10 = dcombo352three->SelectedItem->ToString();
                            dlabel352three->Text = selectedText10;

                            System::String^ selectedText11 = keepercombo352->SelectedItem->ToString();
                            keeperlabel352->Text = selectedText11;
                           
                            
                            std::ostringstream total_budget;
                            total_budget << myList[i]->budget;

                            std::string budgett = total_budget.str();

                            label10->Text = gcnew System::String(budgett.c_str());

                            myList[i]->myteampanel = true;
                            myList[i]->budget_before_replace = myList[i]->budget;
                            myList[i]->budget = 100000;
                            MessageBox::Show("Success", "confirmation done");
                        }
                        else {
                            MessageBox::Show("No Enough Money in your Budget","Sorry");
                            myList[i]->budget = 100000;
                        }


                    }
                }
            }

        }
        else {
            MessageBox::Show("You cannot choose the same player more than one time","WARNING!!");
        }
    }
    else {
        MessageBox::Show("You have to fill all the players to confirm","WARNING!!");
    }
}
private: System::Void pictureBox7_Click(System::Object^ sender, System::EventArgs^ e) {
    home->BringToFront();
}
private: System::Void pictureBox4_Click_1(System::Object^ sender, System::EventArgs^ e) {
    home->BringToFront();
}
private: System::Void pictureBox10_Click(System::Object^ sender, System::EventArgs^ e) {
    home->BringToFront();
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void pictureBox18_Click(System::Object^ sender, System::EventArgs^ e) {
    home->BringToFront();
}

private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e) {

    bool found = false;
    for (int i = 0; i < forward->Count; i++)
    {
        if (textBox2->Text == forward[i]->name) {
            found = true;
        }
    }
    for (int i = 0; i < midfielder->Count; i++)
    {
        if (textBox2->Text == midfielder[i]->name) {
            found = true;
        }
    }
    for (int i = 0; i < defender->Count; i++)
    {
        if (textBox2->Text == defender[i]->name) {
            found = true;
        }
    }
    for (int i = 0; i < goalkeeper->Count; i++)
    {
        if (textBox2->Text == goalkeeper[i]->name) {
            found = true;
        }
    }
    if (found) {
        listBox1->Items->Add(searching[textBox2->Text]->name);
        listBox1->Items->Add(searching[textBox2->Text]->ID);
        listBox1->Items->Add(searching[textBox2->Text]->league);
        listBox1->Items->Add(searching[textBox2->Text]->team);
        listBox1->Items->Add(searching[textBox2->Text]->position);
        listBox1->Items->Add(searching[textBox2->Text]->price);
        listBox1->Items->Add(searching[textBox2->Text]->points);

        listBox1->Visible = true;
        button4->Visible = false;
        button8->Visible = true;
    }
    else {
        MessageBox::Show("Player not found", "Sorry");
    }
}

private: System::Void button8_Click_1(System::Object^ sender, System::EventArgs^ e) {
    listBox1->Visible = false;
    button4->Visible = true;
    button8->Visible = false;
    textBox2->Text = "";
    listBox1->Items->Clear();
}

private: System::Void pictureBox4_Click_2(System::Object^ sender, System::EventArgs^ e) {
    Start->BringToFront();
    richTextBox1->Text = "";
    textBox1->Text = "";
    textBox9->Text = "";
    textBox10->Text = "";
    comboBox1->SelectedIndex = -1;
    label11->Text = "0";
}







    // START UPDATE POINTS AND PRICE FOR FOOTBALLER

private: System::Void button10_Click_1(System::Object^ sender, System::EventArgs^ e) {

    int numofgoals;

    Int32::TryParse(textBox9->Text, numofgoals);

    if (comboBox1->SelectedIndex > -1) {

        searching[comboBox1->SelectedItem->ToString()]->update_goal_points(numofgoals);
    }
}

private: System::Void button11_Click_1(System::Object^ sender, System::EventArgs^ e) {
    int numofassist;

    Int32::TryParse(textBox10->Text, numofassist);

    if (comboBox1->SelectedIndex > -1) {

        searching[comboBox1->SelectedItem->ToString()]->update_goal_points(numofassist);
    }
}

private: System::Void button12_Click_1(System::Object^ sender, System::EventArgs^ e) {

    if (comboBox1->SelectedIndex > -1) {

        searching[comboBox1->SelectedItem->ToString()]->yellow_violation();
    }
}

private: System::Void button13_Click_1(System::Object^ sender, System::EventArgs^ e) {

    if (comboBox1->SelectedIndex > -1) {

        searching[comboBox1->SelectedItem->ToString()]->red_violation();
    }

}

       // END UPDATE POINTS AND PRICE FOR FOOTBALLER







private: System::Void label7_Click_1(System::Object^ sender, System::EventArgs^ e) {

}
 


private: System::Void pictureBox6_Click_1(System::Object^ sender, System::EventArgs^ e) {


    for (int i = 0; i < myList->Count; i++) {

        for each (footballer ^ obj in forward) {
            if (obj->name == myList[i]->myfor1->name) {
                myList[i]->myfor1->points = obj->points;
            }
            if (obj->name == myList[i]->myfor2->name) {
                myList[i]->myfor2->points = obj->points;
            }
        }
        for each (footballer ^ obj in goalkeeper) {
            if (obj->name == myList[i]->mykeeper->name) {
                myList[i]->mykeeper->points = obj->points;
            }
        }
        for each (footballer ^ obj in defender) {
            if (obj->name == myList[i]->mydef1->name) {
                myList[i]->mydef1->points = obj->points;
            }
            if (obj->name == myList[i]->mydef2->name) {
                myList[i]->mydef2->points = obj->points;
            }
            if (obj->name == myList[i]->mydef3->name) {
                myList[i]->mydef3->points = obj->points;
            }
        }
        for each (footballer ^ obj in midfielder) {
            if (obj->name == myList[i]->mymid1->name) {
                myList[i]->mymid1->points = obj->points;
            }
            if (obj->name == myList[i]->mymid2->name) {
                myList[i]->mymid2->points = obj->points;
            }
            if (obj->name == myList[i]->mymid3->name) {
                myList[i]->mymid3->points = obj->points;
            }
            if (obj->name == myList[i]->mymid4->name) {
                myList[i]->mymid4->points = obj->points;
            }
            if (obj->name == myList[i]->mymid5->name) {
                myList[i]->mymid5->points = obj->points;
            }
        }

    }
    

    for (int i = 0; i < myList->Count; i++)
    {
            myList[i]->update_Ppoints();
    }
    

    //TOP 3
    
    String^ Sfirstplayer="";
    String^ Ssecplayer="";
    String^ Sthirdplayer="";
    
    int firstplayer = 0;
    int secplayer = 0;
    int thirdplayer = 0;

    for (int i = 0; i < myList->Count; ++i)
    {  
        
        if (myList[i]->player_total_points > firstplayer) {
            firstplayer = myList[i]->player_total_points;
            Sfirstplayer = myList[i]->player_name;
        }
        
    }
    for (int i = 0; i < myList->Count; ++i) {
        if (myList[i]->player_total_points > secplayer && myList[i]->player_total_points < firstplayer) {
            secplayer = myList[i]->player_total_points;
            Ssecplayer = myList[i]->player_name;
        }
        
    }
    for (int i = 0; i < myList->Count; ++i) {
        if (myList[i]->player_total_points > thirdplayer && myList[i]->player_total_points < firstplayer && myList[i]->player_total_points < secplayer) {
            thirdplayer = myList[i]->player_total_points;
            Sthirdplayer = myList[i]->player_name;
        }
    }
    label7->Text = Sfirstplayer;
    label9->Text = Ssecplayer;
    label8->Text = Sthirdplayer;
    MessageBox::Show("Success", "confirmation done");
}



private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
    }
private: System::Void pictureBox9_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void pictureBox7_Click_2(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void fcombo352one_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    if (radioButton1->Checked == true) {
        comboBox1->Items->Clear();
        for each (footballer ^ obj in goalkeeper) {
            comboBox1->Items->Add(obj->name);
        }
    }
}
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    if (radioButton2->Checked == true) {
        comboBox1->Items->Clear();
    for each (footballer ^ obj in defender) {
        comboBox1->Items->Add(obj->name);
    
      }
    }
}
private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    if (radioButton3->Checked == true) {
        comboBox1->Items->Clear();
        for each (footballer ^ obj in midfielder) {
            comboBox1->Items->Add(obj->name);
          
        }
    }
}
private: System::Void radioButton4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    if (radioButton4->Checked == true) {
        comboBox1->Items->Clear();
        for each (footballer ^ obj in forward) {
            comboBox1->Items->Add(obj->name);
            
        }
    }
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button7_Click_1(System::Object^ sender, System::EventArgs^ e) {

 
}
private: System::Void backgroundWorker1_DoWork(System::Object^ sender, System::ComponentModel::DoWorkEventArgs^ e) {
}
};
}