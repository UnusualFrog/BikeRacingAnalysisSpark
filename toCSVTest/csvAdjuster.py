import glob
import pandas as pd

#TODO Create condensed files

directory_in_str = "..\\output\\fit\\"
directory_out_str = "..\\output\\csv\\"
csv_files = glob.glob(directory_in_str+'\\*.{}'.format('csv'))
count = 0
for file in csv_files:
    df = pd.read_csv(file, low_memory=False)
    file_name = file.split('\\')[-1]
    output_file = directory_out_str + file_name
    array = [hex(int(file_name.replace('.csv','')))] * df.shape[0]
    df['ID'] = array
    df.to_csv(output_file, index=False)
    print(file, "ID added.")
    if count % 50 == 0:
        print(file, "ID added.")
print("Complete")

print(csv_files)
