#include "Game.h"

using std::vector;

Game::Game()
{
	MonsterFactory monFac;
	
	// units_ 이니셜라이즈
	
	// 위치 표현 필요
	/*
		만약 플레이어일경우 
		createMonster("Player", pos)로 생성 가능하도록 monFac 수정
		몬스터일경우("Slime", rand(pos))로 생성 가능하도록.
	*/
	MovableUnit player = monFac.createMonster("Player")
	MovableUnit monster = monFac.createMonster("Slime");
	MovableUnit monster2 = monFac.createMonster("Slime");
	
	// 벡터가 l-value를 필요로 하기 
	// 떄문에 for문을 이용해 push_back(createMonster...) 사용 불가.
	// 다른방법 존재?
	_units.push_back(player);
	_units.push_back(monster);
	_units.push_back(monster2);
	
}
void Game::getInput()
{
	input = userInput.getInput();
}


void Game::update()
{
	// 업데이트에 필요한것?
	/*
	 *	플레이어 입력 처리
	 *  _units 업데이트
	 *  유닛들 알아서 움직이기
	 */
	player.move(input);
	
	// delete dead monsters from units
	for (auto &ele : _units) {
		if(*ele.get_status(Stat::CUR_HP) == 0)
			erase(ele);
	}
}


void Game::render()
{
	/*
	 * _units 기반으로 출력. 기본의 board 클래스 이용할듯
	 */
	terminal.render(board.stringForm());
}