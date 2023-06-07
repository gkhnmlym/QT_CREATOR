#include "todolist.h"
#include <QDebug>

ToDoList::ToDoList(QObject *parent) : QObject(parent)
{
    mItems.append({ true, QStringLiteral("Wash the car")});
    mItems.append({ false, QStringLiteral("Fix the sink")});
}

QVector<ToDoItem> ToDoList::items() const
{
    return mItems;
}

bool ToDoList::setItemAt(int index, const ToDoItem &item)
{
    if (index <0 || index >= mItems.size())
        return false;

    const ToDoItem &oldItem = mItems.at(index);
    if(item.done == oldItem.done && item.description == oldItem.description)
        return false;

    mItems[index] = item;
    return true;
}

void ToDoList::itemChanged(int index)
{
    qDebug() << "Item appended" << index;
}

void ToDoList::appendItem()
{
    emit preItemAppended();

    ToDoItem item;
    item.done = false;
    mItems.append(item);

    emit postItemAppended();
}

void ToDoList::removeCompletedItems()
{
    for (int i = 0; i < mItems.size();){
        if(mItems.at(i).done){
            emit preItemRemoved(i);

            mItems.removeAt(i);

            emit postItemRemoved();
        }
        else{
            ++i;
        }
    }
}

void ToDoList::allSelectItems()
{
    bool allSelected = true;

    // Check if all items are already selected
    for (const auto& item : mItems) {
        if (!item.done) {
            allSelected = false;
            break;
        }
    }

    // Toggle selection status for all items
    for (int i = 0; i < mItems.size(); ++i) {
        if (allSelected) {
            // Deselect all items
            mItems[i].done = false;
        } else {
            // Select all items
            mItems[i].done = true;
        }
        emit itemChanged(i);
    }
}
