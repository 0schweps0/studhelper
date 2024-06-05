#ifndef GLOBALCONSTANTS_H
#define GLOBALCONSTANTS_H
#include <QString>

extern QString name;
extern QString secondName;
extern QString group;

void setName(const QString& value);
void setSecondName(const QString& value);
void setGroup(const QString& value);

QString getName();
QString getSecondName();
QString getGroup();

#endif // GLOBALCONSTANTS_H
