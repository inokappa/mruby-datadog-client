##
## datadog-client Test
##

assert("DatadogClient#hello") do
  t = DatadogClient.new "hello"
  assert_equal("Say hello", t.hello)
end

assert("DatadogClient#hello") do
  t = DatadogClient.new "bye"
  assert_not_equal("Say hello", t.hello)
end

assert("DatadogClient#hello") do
  t = DatadogClient.new("bye") 
  assert_not_equal("Say hello", t.hello)
end
