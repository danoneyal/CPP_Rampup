#include "CRational.h"

template <typename T>
CRational<T>::CRational():m_num{1}, m_den{1}
{
	
}
template <typename T>
CRational<T> ::CRational(T num)
{
	m_num = num;
	m_den = 1;
}

template <typename T>
CRational<T>::CRational(T num, T den):m_num{num},m_den{den}
{
	
}

template <typename T>
CRational<T>& CRational<T>::operator+=(CRational <T> const& ro)
{
	CRational r;
	return r;

}

