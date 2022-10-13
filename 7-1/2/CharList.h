#pragma once

class CharList{
	private:
		std::list<char> mystring_;
	public:
		CharList(const char* str);
		~CharList();

		bool CheckPalindrome();
		std::list<char> GetAll();
};
