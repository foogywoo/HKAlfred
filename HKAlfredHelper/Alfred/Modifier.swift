//CREDITS to https://github.com/BenchR267/swiftalfred/commits?author=BenchR267
//github https://github.com/BenchR267/swiftalfred

public struct Modifier: JSONable {
    public var valid = true
    var arg: Argument
    var subtitle: String?

    public init(arg: Argument, subtitle: String? = nil) {
        self.arg = arg
        self.subtitle = subtitle
    }

    var json: [String : Any] {
        var j = [String: Any]()
        j["subtitle"] = subtitle
        j["arg"] = arg
        if !valid { j["valid"] = valid }
        return j
    }
}
