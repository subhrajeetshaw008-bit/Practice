#WAP to convert some total days into years,weeks and days

total_days=int(input('Enter the total days:'))
years=total_days//365
weeks=(total_days%365)//7
days=(total_days%365)%7
print(years,'Years',weeks,'Weeks',days,'Days')