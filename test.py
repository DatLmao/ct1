def tinh_phi_taxi(s):
   
   


    if s <= 1:
        return 9000
    elif s <= 30:
        return 9000 + (s - 1) * 11000
    else:
        return 9000 + 29 * 11000 + (s - 30) * 9500


s = float(input("Nhập quãng đường (km): "))
budget = tinh_phi_taxi(s)
print(f"Phí taxi cho quãng đường {s} km là: {budget} đồng")