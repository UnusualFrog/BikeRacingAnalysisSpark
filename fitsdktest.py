from garmin_fit_sdk import Decoder, Stream

stream = Stream.from_file("output/fit/10738014183.fit")
decoder = Decoder(stream)
messages, errors = decoder.read()

print(errors)
print(messages)