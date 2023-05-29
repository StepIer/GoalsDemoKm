object Env {
    val configuration = System.getenv("CONFIGURATION") ?: "Debug"
    val sdkName: String? = System.getenv("SDK_NAME")
    val sdkRoot: String? = System.getenv("SDKROOT")
    val sdk_Root: String? = System.getenv("SDK_ROOT")
}