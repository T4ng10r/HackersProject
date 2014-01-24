#ifndef _DECK_INCLUDE_
#define _DECK_INCLUDE_

#include <boost/scoped_ptr.hpp>

class DeckPrivate;

class Deck  
{
	friend class DeckPrivate;
public:
	Deck();
protected:
	std::unique_ptr<DeckPrivate> priv_part;
};
#endif //_DECK_INCLUDE_ 


