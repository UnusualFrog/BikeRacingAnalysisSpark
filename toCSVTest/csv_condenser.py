import glob
import pandas as pd

directory_in_str = "..\\output\\fit\\"
directory_out_str = "..\\output\\csv\\"
csv_files = glob.glob(directory_in_str+'\\*.{}'.format('csv'))
count = 0
file_count = 0
out = pd.DataFrame()
output_file = ""
for file in csv_files:
    count += 1
    df = pd.read_csv(file, low_memory=False)
    file_name = file.split('\\')[-1]
    output_file = directory_out_str + file_name
    array = [hex(int(file_name.replace('.csv','')))] * df.shape[0]
    df['ID'] = array
    out = pd.concat([out, df])
    if count % 50 == 0:
        file_count += 1
        output_file = directory_out_str + 'output_file_' + str(file_count) + '.csv'
        out.to_csv(output_file, index=False)
        out = pd.DataFrame()
        count = 0
        print(output_file, "created.")
file_count += 1
output_file = directory_out_str + 'output_file_' + str(file_count) + '.csv'
out.to_csv(output_file, index=False)
out = pd.DataFrame()
print(output_file, "created.")
print("Complete")