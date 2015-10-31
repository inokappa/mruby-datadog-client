##
## datadog-client Test
##

assert("DatadogClient#hello") do
  t = DatadogClient.new()
  assert_equal("Say bye", t.hello("hello"))
end
