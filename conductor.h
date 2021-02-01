#ifndef Conductor_H
	#define Conductor_H
	#include <QtWidgets>
	#include "terminal.h"
	class Element;
	/**
		This class represents a conductor. A conductor connects two element terminals.

	*/
	class Conductor : public QGraphicsPathItem {
		public:
		enum { Type = UserType + 1001 };
    	virtual int type() const { return Type; }
		Conductor(Terminal *, Terminal *, Element * = 0, QGraphicsScene * = 0);
		//virtual ~Conductor();
		
		void destroy();
		bool isDestroyed() const { return(destroyed); }
		void update(const QRectF & rect);
		void update(qreal x, qreal y, qreal width, qreal height);
		void paint(QPainter *, const QStyleOptionGraphicsItem *, QWidget *);
		static bool valideXml(QDomElement &);
		
		///Premiere Terminal a laquelle le fil est rattache
		Terminal *Terminal1;
		///Deuxieme Terminal a laquelle le fil est rattache
		Terminal *Terminal2;
		private:
		/// booleen indiquant si le fil est encore valide
		bool destroyed;
		
		void calculeConductor();
		bool surLeMemeAxe(Terminal::Orientation, Terminal::Orientation);
		bool estHorizontale(Terminal::Orientation a);
		bool estVerticale(Terminal::Orientation a);
	};
#endif
