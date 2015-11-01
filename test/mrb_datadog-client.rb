##
## datadog-client Test
##

assert("DatadogClient#hello") do
  t = DatadogClient.new 
  assert_equal("Say hello", t.hello("hello"))
end

assert("DatadogClient#hello") do
  t = DatadogClient.new 
  assert_not_equal("Say hello", t.hello("bye"))
end
