#include "Game.h"





using std::vector;
using std::pair;
using std::cout;
using std::endl;
using std::exception;

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
	_player = monFac.createMonster("Player", g_init_x, g_init_y, _board.get_board());
	_monster1 = monFac.createMonster("Slime", rand()%10, rand()%10, _board.get_board());
	_monster2 = monFac.createMonster("Slime", rand()%10, rand()%10, _board.get_board());
		
		
	cout << _monster1 << endl;
	cout << _monster2 << endl;
	
	// 벡터가 l-value를 필요로 하기 
	// 떄문에 for문을 이용해 push_back(createMonster...) 사용 불가.
	// 다른방법 존재?
	_units.push_back(&_player);
	_units.push_back(&_monster1);
	_units.push_back(&_monster2);
		
	cout << *_units[0] << endl;

	
	_player.set_board(&_units);
	_monster1.set_board(&_units);
	_monster2.set_board(&_units);
	_board.set_board(_units);
		
	_monster1_AI = MonsterAI("Slime", &_units, &_monster1);
	_monster2_AI = MonsterAI("Slime", &_units, &_monster2);
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
	// cout << "input: " << input.first << ", " << input.second << endl;
	_player.move(input.first, input.second);


	// delete dead monsters from _units
	auto itr = _units.begin();
	while(itr != _units.end()) {
		cout << (*itr)->get_unit_type() << "'s HP: " << (*itr)->get_status(Stat::CUR_HP) << endl;

		if((*itr)->get_status(Stat::CUR_HP) <= 0) {
			
			_units.erase(itr);
		} 
		else {
			++itr;
		}
	}
	
	// AI's move, use _units for move
	_monster1_AI.move_AI();
	_monster2_AI.move_AI();
	
	
	
	if(victory()) {
		// string str = "Victory! All monster is defeated";
		// auto border_size = str.size();
		cout << "********************************" << endl;
		cout << "Victory! All monster is defeated" << endl;
		cout << "********************************" << endl;
		exit(0);
	}
}


void Game::render()
{
	/*
	 * _units 기반으로 출력. 기존의 board 클래스 이용할듯
	 */
	cout << _board.stringForm() << endl;
}
	
pair<int, int> Game::convertInputToUnitMove() {
	pair<int, int> result; 
	switch(_input) {
		case UserInput::UP:
			result = std::make_pair(0, -1);
			break;
		case UserInput::DOWN:
			result = std::make_pair(0, 1);
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

bool Game::victory() {
	cout << "units_no: " << _units.size() << endl;
	if(_units.size() == 1)
	{
		for(auto & ele : _units) {
			if(ele->get_unit_type() == "Player")
				return true;
			
			else { 
				return false;
			}
		}
	}
	else 
		return false;

}