import gzip
import shutil
import os

from zipfile import ZipFile

# loading the temp.zip and creating a zip object
with ZipFile("activities.zip", 'r') as zObject:
    zObject.extractall(path="output")

directory_in_str = "output\\activities\\"
directory = os.fsencode(directory_in_str)

for file in os.listdir(directory):
    filename = os.fsdecode(file)
    with gzip.open(directory_in_str + filename, 'rb') as f_in:
        with open("output\\fit\\" + filename.replace(".gz", ""), 'wb') as f_out:
            shutil.copyfileobj(f_in, f_out)

