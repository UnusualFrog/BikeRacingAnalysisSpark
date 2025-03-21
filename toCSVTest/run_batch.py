import os
# import shutil
# import glob
import subprocess

subprocess.Popen(['FitSDKRelease_21.158.00\\java\\FitToCSV.bat', "..\\output\\fit\\10738014183.fit"])


directory_in_str = "..\\output\\fit\\"
directory_in = os.fsencode(directory_in_str)

directory_out_str = "..\\output\\csv\\"

# Make an output directory if it does not exist
if not os.path.isdir(directory_out_str):
    os.makedirs(directory_out_str)

# run the batch file on each file in the input directory that ends with .fit
for file in os.listdir(directory_in):
        filename = os.fsdecode(file)
        if filename.endswith(".fit"):
            p = subprocess.Popen(['FitSDKRelease_21.158.00\\java\\FitToCSV.bat', "..\\output\\fit\\" + filename], stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True)

            p.stdin.write('\n')
            p.stdin.flush()
            p.wait()
            print(filename)






