#include "GlobalConstants.h"

QString name = "";
QString secondName = "";
QString group = "";

void setName(const QString& value) {
    name = value;
}

void setSecondName(const QString& value) {
    secondName = value;
}

void setGroup(const QString& value) {
    group = value;
}

QString getName() {
    return name;
}

QString getSecondName() {
    return secondName;
}

QString getGroup() {
    return group;
}
