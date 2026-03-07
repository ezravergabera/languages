import pandas as pd
import matplotlib.pyplot as plt

df = pd.read_csv('Diamonds-Prices2022.csv')

# filtered_df = df[df.sort_values(by='carat', ascending=True) & (df['cut'] == "Premium")]

filtered_df = df[(df['clarity'] == "IF") & (df['color'] == "D")]

print(filtered_df.sort_values(by="price", ascending=True))

plt.figure(figsize=(8, 5))  # Set the figure size (optional)

plt.plot(filtered_df['carat'], filtered_df['price'], marker='o', linestyle='-', color='b', label='Sales')  # Line graph with markers

plt.title('Carat vs Price')  # Add a title
plt.xlabel('Carat')  # Add x-axis label
plt.ylabel('Price')  # Add y-axis label
plt.grid(True)  # Add gridlines for better readability
plt.legend()  # Add legend

plt.tight_layout()  # Adjust layout for better fit
plt.show() 

# df.sort_values(by="color", ascending=True).to_csv('filteredColor.csv')