#!/usr/bin/env ruby
def extract_data(input_str)
  input_str.scan(/(?<=from:|to:|flags:).+?(?=\])/).join(',')
end

puts extract_data(ARGV[0])
