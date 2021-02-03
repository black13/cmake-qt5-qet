#ifndef PANELAPPAREILS_H
	#define PANELAPPAREILS_H
	#include <QtWidgets>
	/**
	This class represents the panel of devices (as an element
	graph) in which the user chooses the components of
	his choice and places them on the diagram by drag'n drop.
	*/
	class PanelDevice : public QListWidget {
		Q_OBJECT
		public:
		PanelDevice(QWidget * = 0);
		public slots:
		void dragMoveEvent(QDragMoveEvent *);
		void dropEvent(QDropEvent *);
		void startDrag(Qt::DropActions);
	};
#endif
