#include <QApplication>
#include <QWebView>

int main(int argc, char *argv[])
{
	char *def_url = "./test.html";
	char url[128];

    QApplication a(argc, argv);
    QWebView view;
    view.show();
//    view.load(QUrl("http://google.com"));

	strcpy(url, "file:///");
	if (argc == 2)
		strcat(url, argv[1]);
	else
		strcat(url, def_url);

	view.load(QUrl(url));
    return a.exec();
}
