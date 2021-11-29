#ifndef CSVSYSTEM_H
#define CSVSYSTEM_H

#include <QString>
#include <QStringList>
#include <QFile>
#include <QTextStream>
#include <QVector>


class Book
{
private:
    bool hidden;
    QString isbn;
    QString title;
    QString author;
    QString genre1;
    QString genre2;
    QString type;
    QString desc;

    // Genre and Type bindings. Anytime a book is added or modified, the respective fields will check these lists for allowed types of Genre/Book Type
    QStringList genreList = {"Action", "Adventure", "Graphic Novel", "Manga", "Mystery", "Fantasy", "Horror", "Romance", "Sci-Fi", "Thriller", "Biography", "History", "N/A"};
    QStringList typeList = {"Fiction", "Non-Fiction", "N/A"};

public:
    Book(QString is="", QString ti="",  QString au="", QString g1 = "", QString g2="", QString ty="", QString d="", bool h = true)
    {
        isbn = is;
        title = ti;
        author = au;
        genre1 = g1;
        genre2 = g2;
        type = ty;
        desc = d;
        hidden = h;

    }

    Book SetBookData(QString, QString, QString, QString, QString, QString, QString);
    QString GetBookDataAsCSV(Book);
    QString GetBookDataAsText(Book);

};



class CSVSystem
{
public:
    CSVSystem();
    void ReadFromCSV();
    void WriteToCSV(QVector<Book>);
};



#endif // CSVSYSTEM_H
