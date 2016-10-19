#include <QApplication>
#include <QWebView>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWebView view;
    view.show();
//    view.load(QUrl("http://google.com"));
	view.load(QUrl("./test.html"));
    return a.exec();
}
