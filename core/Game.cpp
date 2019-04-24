#include "Game.h"
#include "UserInput.h"


using std::vector;
using std::pair;
using std::cout;
using std::endl;

Game::Game()
	: _board(_units, 10, 10)
{
	MonsterFactory monFac;
	
	// units_ 이니셜라이즈
	
	// 위치 표현 필요
	/*
		만약 플레이어일경우 
		createMonster("Player", pos)로 생성 가능하도록 monFac 수정
		몬스터일경우("Slime", rand(pos))로 생성 가능하도록.
	*/
	MovableUnit player = monFac.createMonster("Player", g_init_x, g_init_y);
	MovableUnit monster1 = monFac.createMonster("Slime", rand()%10, rand()%10);
	MovableUnit monster2 = monFac.createMonster("Slime", rand()%10, rand()%10);
		
		
	cout << monster1 << endl;
	cout << monster2 << endl;
	
	// 벡터가 l-value를 필요로 하기 
	// 떄문에 for문을 이용해 push_back(createMonster...) 사용 불가.
	// 다른방법 존재?
	_units.push_back(&player);
	_units.push_back(&monster1);
	_units.push_back(&monster2);
		
	cout << *_units[0] << endl;

	
	player.set_board(_units);
	monster1.set_board(_units);
	monster2.set_board(_units);
	_board.set_board(_units);
	_player = player;
	cout << "Game.cpp Constructor is called successfully" << endl;

	// _board(_units, 10, 10);
	// _terminal(_board);
	
}

void Game::getInput()
{
	cout << "Press any key: ";

	_input = _userInput.getInput();
}


void Game::update()
{
	

	// 업데이트에 필요한것?
	/*
	 *	플레이어 입력 처리
	 *  _units 업데이트
	 *  유닛들 알아서 움직이기
	 */
	
	auto input = convertInputToUnitMove();
	_player.move(input.first, input.second);

	

	// delete dead monsters from units
	// 20190422 11:19 
	// for (auto iter = _units.begin(); iter != _units.end(); ++iter) {
	// 	if((*iter)->get_status(Stat::CUR_HP) == 0)
	// 		_units.erase(iter);
	// }
	
	// for (auto &ele : _units) {
	// 	if(ele->get_status(Stat::CUR_HP) == 0)
	// 		_units.erase(ele);
	// }
	
	// for(auto &ele : _units) {
	// 	if(*ele.get_status(Stat::UNIT_TYPE) != "Player")
	// 	{
	// 		ele->AI_move();
	// 	}
}


void Game::render()
{
	/*
	 * _units 기반으로 출력. 기본의 board 클래스 이용할듯
	 */
	cout << _board.stringForm() << endl;
}
	
pair<int, int> Game::convertInputToUnitMove() {
	pair<int, int> result; 
	switch(_input) {
		case UserInput::UP:
			result = std::make_pair(0, 1);
			break;
		case UserInput::DOWN:
			result = std::make_pair(0, -1);
			break;
		case UserInput::RIGHT:
			result = std::make_pair(1, 0);
			break;
		case UserInput::LEFT:
			result = std::make_pair(-1, 0);
			break;
	}
	
	return result;
}
