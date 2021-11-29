#include "csvsystem.h"

CSVSystem::CSVSystem()
{

}

void CSVSystem::ReadFromCSV()
{
    QStringList splitList;
    QFile file(":/res/libsys-bookdata.csv");

   file.open(QFile::ReadOnly);

    QTextStream in(&file);

    while(!in.atEnd())
    {
        QString s = in.readLine();
        splitList.append(s.split(",,"));
    }
    file.close();
    // TODO: Load into bookVec
}

void CSVSystem::WriteToCSV(QVector<Book> bookVec)
{
    QFile file(":/res/libsys-bookdata.csv");
    file.open(QIODevice::WriteOnly | QIODevice::Truncate);

    QTextStream out(&file);

    for(int i =0; i < bookVec.size(); i += 8)
    {
        out << bookVec[i].GetBookDataAsCSV(bookVec[i]);
    }
}

// Used when the admin is adding a new book, sets the data by returning a temporary book to the vector
Book Book::SetBookData(QString isbn, QString title, QString author, QString genre1, QString genre2, QString type, QString desc)
{
    int iterator = 0;

    Book tempBook;
    tempBook.isbn = isbn;
    tempBook.title = title;
    tempBook.author = author;

    // This checks if the genre entered matches a genre in the genreList. Will auto set the genre to N/A if the entered genre does not match any on the genreList.
    // Should also popup a message box warning the admin of this, making sure they set it through either a window or through other means.


    // Genre validity check, makes sure the genre is valid by the value passed in against the genreList array
    while(iterator != genreList.length())
    {
        if(genre1 == genreList[iterator])
        {
             tempBook.genre1 = genre1;
        }

        else if(genre2 == genreList[iterator])
        {
             tempBook.genre2 = genre2;
        }
        else
        {
            // Setting the genre to "N/A" if no applicable matching genre is found in genreList
            tempBook.genre1 = genreList[12];
            tempBook.genre2 = genreList[12];
        }

        iterator++;
    }


    iterator = 0; // Manually setting the iterator to 0 for the next loop

    // Type validity check, makes sure the type is valid by the value passed in against the typeList array
    while(iterator != typeList.length())
    {
        if(type == typeList[iterator]) tempBook.type = type;
        else tempBook.type = typeList[2]; // Setting the type to be N/A if no applicable type can be found
    }

    // If some fields are not properly filled out such as Genre, then popup a message warning the Admin about this and how they will not be able to set the book to visible until these issues are resolved.

    tempBook.desc = desc;

    // Set hidden here to true by default just in case the admin might have entered incorrect details for the book
    tempBook.hidden = true;

    return tempBook;
}


QString Book::GetBookDataAsCSV(Book book)
{
               QString temp;
               temp += book.isbn + ",,";
               temp += book.title + ",,";
               temp += book.author + ",,";
               temp += book.genre1 + ",,";
               temp += book.genre2 + ",,";
               temp += book.type + ",,";
               temp += book.desc + ",,";
               temp += QString::number(book.hidden) + ",," + '\n';

               return temp;
}
