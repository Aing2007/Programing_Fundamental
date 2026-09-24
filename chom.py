def concession(n, stock, item_price, restock_qty):
    money = 0
    final_price = 0
    total_money = 0
    
    for i in range(1, n+1):
        if i % 4 == 0:
            stock += restock_qty
        else:
            total_item = i
            
            if stock < total_item:
                return -i
            
            if i % 3 == 0:
                final_price = item_price * 2
            else:
                final_price = item_price
            
            stock -= total_item 
            money = total_item * final_price
            total_money += money
    
    return total_money

print(concession(6, 20,40, 15))