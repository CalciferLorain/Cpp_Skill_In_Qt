#include "treemodel.h"
#include <QtWidgets/QApplication>
#include <QtWidgets/QTreeView>

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	TreeModel  treeModel;

	QTreeView treeView(0);
	treeView.setModel( & treeModel );
	treeView.show();
	return app.exec();
}
