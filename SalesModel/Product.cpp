/**
 * Project Untitled
 */

#include "pch.h"
#include "Product.h"

/**
 * Product implementation
 */
//Sultan estuvo aqui
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
