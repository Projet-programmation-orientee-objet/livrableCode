#pragma once
using namespace System;
namespace Composant
{
	ref class MappingAdress
	{
		public:
		int ID_Adress;
		String^ street ;
		int   number;
		int ID_Customer;
		int ID_city;
		int ID_country;
		String^ city;
		String^ country;
	public:
		MappingAdress() {};
		void setID_Adress(int);
		void setstreet(String^);
		void setnumber(int);
		void setCity(String^ city);
		void setID_Customer(int);
		void setID_city(int);
		void setID_country(int);
		void setcity(String^);
		void setcountry(String^);
		System::String ^ SelectAll(void);
		System::String^ SelectWithId(void);
		System::String ^ Insert(void);
		System::String^ InsertCity(void);
		System::String^ InsertCountry(void);
		System::String^ InsertLive(void);
		System::String ^ Delete(void);
		System::String^ DeleteCity(void);
		System::String^ DeleteCountry(void);
		System::String^ DeleteLive(void);
		System::String ^ Update(void);
		System::String^ UpdateCountry(void);
		System::String^ UpdateCity(void);
	
	};

}

