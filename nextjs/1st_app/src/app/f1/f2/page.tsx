import Link from "next/link"

export default function F2() {
    return (
        <div>
            <h1>
                F2 page <Link href={"/f4"}>F4</Link>
            </h1>
        </div>
    )
}