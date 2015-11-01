class DatadogClient
  def initialize(data)
    @data = data
  end

  def hello
    "Say " + @data
  end
end

h = DatadogClient.new("hello")
p h.hello
