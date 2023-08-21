/**
 * Project Untitled
 */

#include "pch.h"
#include "Product.h"

/**
 * Product implementation
 */
//Sultan estuvo aqui vagando
//Son las 10:40am
SalesModel::Product::Product(const Product^& copier)
{
    Id = copier->Id;
    Name = copier->Name;
    Description = copier->Description;
    Price = copier->Price;
    Stock = copier->Stock;
    Status = copier->Status;
    Photo = copier->Photo;
}
