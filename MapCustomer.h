#pragma once
using namespace System;
namespace Composant
{
	ref class MapCustomer
	{
	public:
		System::String^ lastName;
		System::String^ firstName;
		System::String^ phoneNumber;
		System::String^ mail;
		System::String^ birthDate;
		int ID_Client;
	public:
		MapCustomer();
		void setLastName(String^);
		void setFirstName(String^);
        void setId(int); 
		void setPhone(String^);
		void setMail(String^);
		void setBirthDate(String^);
		String^ SelectAll(void);
		String^ SelectWithId(int);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);
		
	};
}
