#pragma once

#include <conio.h>
#include <windows.h>


class Point
{
	private:
		int m_x;
		int m_y;
		
	public:
		Point(int x = 0, int y = 0)
		: m_x(x), m_y(y)
		{}
		
		int getX(){ return m_x; }
		int getY(){ return m_y; }
		void setX(int x){ m_x = x; }
		void setY(int y){ m_y = y; }
				
				
		static void gotoxy(int x, int y);
		static void gotoxy(Point pos);
		
		static Point GetScrPosFromCurPos(Point &pos);
};