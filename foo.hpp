#pragma once
#include "Human.hpp"
#include <algorithm>
#include <list>
#include <vector>
std::vector< char > foo(std::list< Human >& people)
{
	std::vector<char> wynik(people.size());

	auto iterator_wyniku = wynik.begin();
	std::for_each(people.rbegin(), people.rend(), [&](Human& person) {
		person.birthday();
		char znak;
		if (person.isMonster()) {
			znak = 'n';
		}
		else {
			znak = 'y';
		}
		*iterator_wyniku = znak;
		iterator_wyniku++;


		});
	
	return wynik;
}
