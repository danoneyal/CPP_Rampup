#pragma once
template <typename T>
class CRational
{
	CRational();
	CRational(T num);
	CRational(T num,T den);

	CRational& operator+=(CRational const& ro);
private:
	T m_num; 
	T m_den;
};

