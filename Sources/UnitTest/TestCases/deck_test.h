#include <gtest/gtest.h>
#include <GameLogic/Deck/Deck.h>

class ut_deck_test : public ::testing::Test
{
public:
	std::shared_ptr<deck>  deck_;
public:
	ut_deck_test() : deck_(new deck)
	{
	}
};

TEST_F(ut_deck_test, start)
{


}